/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_constuctors.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:03 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 12:56:02 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

t_format	*ft_new_format(char *substr)
{
	t_format	*new_format;
	char		*c;

	if (!(new_format = (t_format *)malloc(sizeof(t_format))))
		return (NULL);
	ft_bzero(new_format, sizeof(t_format));
	ft_memset(new_format->flags, 1, 5);
	if (substr && *substr == '%')
	{
		c = substr + 1;
		new_format->form = ft_strdup(c);
		c = ft_set_flags(c, new_format);
		c = ft_set_width(c, new_format);
		c = ft_set_preci(c, new_format);
		c = ft_set_size(c, new_format);
		c = ft_set_type(c, new_format);
		if (!new_format->type)
			new_format->tostring = ft_strdup(c);
	}
	else if (substr && *substr != '%')
		new_format->tostring = ft_strdup(substr);
	return (new_format);
}
