/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_format_setters.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:48 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/03 08:34:46 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_set_flags(char *c, t_format *f)
{
	int		i;

	if (c && f)
	{
		i = 0;
		if (ft_strchr(c, '+'))
			f->flags[i] = '+';
		i++;
		if (ft_strchr(c, '-'))
			f->flags[i] = '-';
		i++;
		if (ft_find_flag_zero(c))
			f->flags[i] = '0';
		i++;
		if (ft_strchr(c, '#'))
			f->flags[i] = '#';
		i++;
		if (ft_strchr(c, ' '))
			f->flags[i] = ' ';
		while (*c == '+' || *c == '-' || *c == '0' || *c == '#' || *c == ' ')
			c++;
		ft_override_flags(f);
	}
	return (c);
}

char	*ft_set_width(char *c, t_format *f)
{
	if (ft_isdigit(*c))
	{
		f->width = ft_atoi(c);
		while (ft_isdigit(*c))
			c++;
	}
	return (c);
}

char	*ft_set_preci(char *c, t_format *f)
{
	if (c && *c == '.')
	{
		c++;
		if (ft_isdigit(*c) || *c == '+' || *c == '-')
		{
			f->preci = ft_atoi(c);
			while (ft_isdigit(*c) || *c == '+' || *c == '-')
				c++;
		}
		else
			f->preci = 0;
	}
	else
		f->preci = -1;
	return (c);
}

char	*ft_set_size(char *c, t_format *f)
{
	c = ft_pass(c);
	while (*c == 'h' || *c == 'l' || *c == 'j' || *c == 'z')
	{
		if (!ft_strncmp(c, "hh", 2))
		{
			f->size_tmp = HH;
			c++;
		}
		else if (!ft_strncmp(c, "h", 1))
			f->size_tmp = H;
		else if (!ft_strncmp(c, "ll", 2))
			f->size_tmp = LL;
		else if (!ft_strncmp(c, "l", 1))
			f->size_tmp = L;
		else if (!ft_strncmp(c, "j", 1))
			f->size_tmp = J;
		else if (!ft_strncmp(c, "z", 1))
			f->size_tmp = Z;
		if (f->size_tmp > f->size)
			f->size = f->size_tmp;
		c++;
	}
	return (c);
}

char	*ft_set_type(char *c, t_format *f)
{
	while (*c == '+' || *c == '-' || *c == '0' || *c == '#' || *c == ' ' ||
		*c == '.' || *c == 'h' || *c == 'l' || *c == 'j' || *c == 'z' ||
		ft_isdigit(*c))
		c++;
	if (*c == 's' || *c == 'S' || *c == 'p' || *c == 'd' || *c == 'D' ||
		*c == 'i' || *c == 'o' || *c == 'O' || *c == 'u' || *c == 'U' ||
		*c == 'x' || *c == 'X' || *c == 'c' || *c == 'C' || *c == '%')
	{
		f->type = *c;
		c++;
	}
	else
		f->type = 0;
	return (c);
}
