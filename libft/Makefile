# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/08/01 07:51:05 by ybarraul     #+#   ##    ##    #+#        #
#    Updated: 2018/08/16 10:19:42 by ybarraul    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#### System Configuration Section ####

NAME	= libft.a
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

#### Libft Definition Section ####

LIBFT_INC_DIR	= ./inc/
LIBFT_OBJ_DIR	= ./obj/
LIBFT_SRC_DIR	= ./src/

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
LIBFT_OBJS	= $(addprefix $(LIBFT_OBJ_DIR), $(OFILES))
OFILES		= $(CFILES:.c=.o)

# Rules Section #

all:	$(NAME)

$(NAME): $(LIBFT_OBJS)
	@ $(ECHO) "Creation => Libft"
	@ $(CC) $(CFLAGS) -c $(LIBFT_SRC) -I $(LIBFT_INC_DIR)
	@ $(AR) $(ARFLAGS) $(NAME) $(OFILES)
	@ $(MKDIR) $(MKDIRFLAGS) $(LIBFT_OBJ_DIR)
	@ mv $(OFILES) $(LIBFT_OBJ_DIR)
	@ $(ECHO) "Libft.a is ready"
	@ $(AR) $(ARFLAGS) $(NAME) $(OBJECTS) $(LIBFT_OBJS)

$(LIBFT_OBJ_DIR)%.o: $(LIBFT_SRC_DIR)%.c
	@ $(MKDIR) $(MKDIRFLAGS) $(LIBFT_OBJ_DIR)
	@ $(CC) $(CFLAGS) -o $@ -c $< -I $(LIBFT_INC_DIR)

clean:
	@ $(ECHO) "Cleaning the Objects => libft.a"
	@ $(RM) $(RMFLAGS) $(LIBFT_OBJ_DIR)

fclean: clean
	@ $(ECHO) "Deleting the Library => libft.a"
	@ $(RM) $(RMFLAGS) $(LIBFT_OBJ_DIR)
	@ $(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
