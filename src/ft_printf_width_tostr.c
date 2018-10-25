/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width_tostring.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:48 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 08:43:51 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_width_tostring_more(t_format *f)
{
	char *p;

	if (f->type == 'd' || f->type == 'D' || f->type == 'i')
	{
		if ((p = ft_strchr(f->tostring, '+')) && (p[-1] == '0'))
		{
			f->tostring[0] = '+';
			*p = '0';
		}
		if ((p = ft_strchr(f->tostring, '-')) && (p[-1] == '0'))
		{
			f->tostring[0] = '-';
			*p = '0';
		}
	}
}

void		ft_width_tostring(t_format *f)
{
	char	*width;
	int		width_len;

	width = NULL;
	width_len = f->width - ft_strlen(f->tostring);
	if ((f->type == 'c' || f->type == 'C') && f->arg == NULL)
		width_len--;
	if (width_len > 0)
	{
		if (f->preci == 0 && f->type != 'x' && f->type != 'o' &&
			f->type != 'd')
			width = ft_strgen('0', width_len);
		if (f->preci == 0 && f->arg == 0)
			width = ft_strgen('0', width_len);
		else
			width = ft_strgen(' ', width_len);
		if ((f->type == 's' || f->type == 'S') && f->preci == 0 &&
				f->width != 0 && !(f->flags[2] == '0'))
			width = ft_strgen(' ', width_len);
		f->tostring = f->flags[1] == '-' ?
			ft_strjoinfree(f->tostring, width) :
			ft_strjoinfree(width, f->tostring);
	}
	ft_width_tostring_more(f);
}
