# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/08/01 07:51:05 by ybarraul     #+#   ##    ##    #+#        #
#    Updated: 2018/08/16 11:10:49 by ybarraul    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#### System Configuration Section ####

NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar
ARFLAGS	= rc
RANLIB	= randlib
MKDIR	= mkdir
MKDIRFLAGS	= -p
RM		= rm
RMFLAGS = -rf
ECHO	= echo

#### Libraries Definition Section ####

LIBFT_DIR	= ./libft/
LIBS		= $(LIBFT_DIR)libft.a

#### Libft Definition Section ####

LIBFT_INC_DIR	= ./libft/inc/
LIBFT_OBJ_DIR	= ./libft/obj/
LIBFT_SRC_DIR	= ./libft/src/
LIBFT_NAME		= libft.a

YBARRAUL = 	ft_swap.c		ft_sqrt.c		ft_islower.c	ft_isupper.c	\
			ft_strrev.c     ft_itoa_base.c	ft_strupcase.c  ft_strlowcase.c	\
			ft_str_is_alpha.c				ft_str_is_print.c				\
			ft_str_is_lowercase.c			ft_str_is_uppercase.c			\
			ft_recursive_power.c			ft_str_is_numeric.c				\
			ft_recursive_factorial.c		ft_strcapitalize.c				\
			ft_strjoinfree.c				ft_exit.c		ft_realloc.c	\
			ft_lstpush.c	ft_lstdup.c		get_next_line.c	ft_abs.c		\
			ft_strtolower.c	ft_strrealloc.c	ft_getnbr.c

BONUS =		ft_lstnew.c		ft_lstdelone.c	ft_lstdel.c		ft_lstadd.c		\
			ft_lstiter.c	ft_lstmap.c

CFILES =	ft_memset.c		ft_strcat.c		ft_isdigit.c	ft_striter.c	\
			ft_putchar.c 	ft_bzero.c		ft_strncat.c	ft_isalnum.c	\
			ft_striteri.c	ft_putstr.c		ft_memcpy.c		ft_strlcat.c	\
			ft_isascii.c	ft_strmap.c		ft_putendl.c	ft_memccpy.c	\
			ft_strchr.c		ft_isprint.c	ft_strmapi.c	ft_putnbr.c		\
			ft_memmove.c	ft_strrchr.c	ft_toupper.c	ft_strequ.c		\
			ft_putchar_fd.c	ft_memchr.c		ft_strstr.c		ft_tolower.c	\
			ft_strnequ.c	ft_putstr_fd.c	ft_memcmp.c		ft_strnstr.c	\
			ft_memalloc.c	ft_strsub.c		ft_putendl_fd.c	ft_strlen.c		\
			ft_strcmp.c		ft_memdel.c		ft_strjoin.c	ft_putnbr_fd.c	\
			ft_strdup.c		ft_strncmp.c	ft_strnew.c		ft_strtrim.c	\
			ft_strcpy.c		ft_atoi.c		ft_strdel.c		ft_strsplit.c	\
			ft_strncpy.c	ft_isalpha.c	ft_strclr.c		ft_itoa.c		\
			$(BONUS)		$(YBARRAUL)

LIBFT_SRC	= $(addprefix $(LIBFT_SRC_DIR), $(CFILES))
OFILES		= $(CFILES:.c=.o)
LIBFT_OBJS	= $(addprefix $(LIBFT_OBJ_DIR), $(OFILES))

#### Files Definition Section ####

INCLUDESDIR = ./inc/
INCLUDES	= -I $(INCLUDESDIR) -I $(LIBFT_INC_DIR)
SRCDIR		= ./src/
SRCS_FILES	= ft_printf.c		ft_printf_itoa_type.c	ft_printf_type_tostr.c \
		  ft_printf_constuctors.c					ft_printf_itoa_type_ext.c \
		  ft_printf_type_tostr_ext.c				ft_printf_destructors.c \
		  ft_printf_parse.c	ft_printf_unicode.c		ft_printf_flags_tostr.c \
		  ft_printf_preci_tostr.c					ft_printf_width_tostr.c \
		  ft_printf_format_setters.c		ft_printf_ptoa.c	ft_strgen.c \
		  ft_printf_format_setters_ext.c			ft_printf_put_to_str.c

OBJDIR	= ./obj/
OBJ_FILES	= $(SRCS_FILES:.c=.o)
OBJECTS =   $(addprefix $(OBJDIR), $(OBJ_FILES))

# Rules Section #

all:	$(NAME)

$(NAME): $(OBJECTS) $(LIBFT_OBJS)
	@ make libft
	@ $(ECHO) "Creation the Executable"
	@ $(AR) $(ARFLAGS) $(NAME) $(OBJECTS) $(LIBFT_OBJS)
#	@ $(CC) $(CFLAGS) $(OBJS_FILES) $(LIBS) -o $@

$(OBJDIR)%.o: $(SRCDIR)%.c
	@ $(ECHO) "Compiling  $<"
	@ $(MKDIR) $(MKDIRFLAGS) $(OBJDIR)
	@ $(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDESDIR) -I $(LIBFT_INC_DIR)

$(LIBFT_OBJ_DIR)%.o: $(LIBFT_SRC_DIR)%.c
	@ $(MKDIR) $(MKDIRFLAGS) $(LIBFT_OBJ_DIR)
	@ $(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDESDIR) -I $(LIBFT_INC_DIR)

clean:
	@ $(ECHO) "Cleaning the Objects"
	@ make clean -C $(LIBFT_DIR)
	@ $(RM) $(RMFLAGS) $(LIBFT_OBJ_DIR)
	@ $(RM) $(RMFLAGS) $(OBJDIR)

fclean: clean
	@ $(ECHO) "Deleting the Library"
	@ make fclean -C $(LIBFT_DIR)
	@ $(RM) $(RMFLAGS) $(LIBFT_OBJ_DIR)
	@ $(RM) $(RMFLAGS) $(LIBFT_NAME)
	@ $(RM) $(RMFLAGS) $(OBJDIR)
	@ $(RM) $(RMFLAGS) $(NAME)
	@ $(RM) $(RMFLAGS) $(LIBS)

re: fclean all

libft:
	@ $(ECHO) "Compiling  Libft"
	@ make -C $(LIBFT_DIR)
.PHONY: all clean fclean re libft
