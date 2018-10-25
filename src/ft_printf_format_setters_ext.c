/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_format_setters_ext.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:48 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 08:43:48 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_override_flags(t_format *f)
{
	if (f->flags[0] == '+' && f->flags[4] == ' ')
		f->flags[4] = -1;
	if (f->flags[2] == '0' && f->flags[1] == '-')
		f->flags[2] = -1;
}

char	*ft_find_flag_zero(char *c)
{
	if (c && *c)
	{
		while (*c)
		{
			if (ft_isdigit(*c) && *c != '0')
				return (NULL);
			else if (*c == '0')
				return (c);
			c++;
		}
	}
	return (NULL);
}

char	*ft_pass(char *c)
{
	while (*c == '+' || *c == '-' || *c == '0' || *c == '#' || *c == ' ' ||
		*c == '.' || ft_isdigit(*c))
		c++;
	return (c);
}
