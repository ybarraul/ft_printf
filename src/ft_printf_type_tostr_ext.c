/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type_tostring_ext.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:48 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/27 14:38:55 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_type_s_tostring(t_format *f, va_list ap)
{
	wchar_t *tmp;

	if ((f->type == 's' && f->size == L) || f->type == 'S')
	{
		tmp = va_arg(ap, wchar_t *);
		if (f->preci == 0)
		{
			f->tostring = ft_strdup("(null)");
			return (1);
		}
		if (ft_convert_wstr_to_str(&f->tostring, tmp, f->preci) == -1)
			return (-1);
		f->arg = ft_strdup(f->tostring);
	}
	else
	{
		f->arg = ft_strdup(va_arg(ap, char *));
		f->tostring = ft_strdup(f->arg);
	}
	if (!f->arg)
	{
		f->tostring = ft_strdup("(null)");
		return (1);
	}
	return (1);
}

int		ft_type_c_tostring(t_format *f, va_list ap)
{
	wchar_t tmp[2];

	if ((f->type == 'c' && f->size == L) || f->type == 'C')
	{
		tmp[0] = va_arg(ap, wchar_t);
		tmp[1] = 0;
		if (ft_convert_wstr_to_str(&f->tostring,
			(wchar_t *)tmp, f->preci) == -1)
			return (-1);
	}
	else
	{
		f->tostring = ft_strnew(sizeof(char));
		*f->tostring = (char)va_arg(ap, int);
	}
	f->arg = f->tostring[0] ? ft_strdup(f->tostring) : NULL;
	return (1);
}

void	ft_type_p_tostring(t_format *f, va_list ap)
{
	if (!(f->tostring = ft_ptoa(va_arg(ap, void *))))
		f->tostring = ft_strdup("0");
	f->arg = ft_strdup(f->tostring);
	f->flags[3] = '#';
}

void	ft_type_di_tostring(t_format *f, va_list ap)
{
	int			t;
	intmax_t	arg;

	t = (f->type == 'd' || f->type == 'i');
	if (t && f->size == LL)
		arg = (long long)va_arg(ap, intmax_t);
	else if ((t && f->size == L) || f->type == 'D')
		arg = (long)va_arg(ap, intmax_t);
	else if (t && f->size == HH)
		arg = (signed char)va_arg(ap, intmax_t);
	else if (t && f->size == H)
		arg = (short)va_arg(ap, intmax_t);
	else if (t && f->size == J)
		arg = (intmax_t)va_arg(ap, intmax_t);
	else if (t && f->size == Z)
		arg = (size_t)va_arg(ap, intmax_t);
	else
		arg = (int)va_arg(ap, intmax_t);
	f->tostring = ft_intmax_itoa_type(arg, f->type);
	f->arg = ft_strdup(f->tostring);
}

void	ft_type_uox_tostring(t_format *f, va_list ap)
{
	int			t;
	uintmax_t	arg;

	t = (f->type == 'u' || f->type == 'o' || f->type == 'x' || f->type == 'X');
	arg = va_arg(ap, uintmax_t);
	if (t && f->size == LL)
		arg = (unsigned long long int)arg;
	else if ((t && f->size == L) || f->type == 'U' || f->type == 'O')
		arg = (unsigned long int)arg;
	else if (t && f->size == HH)
		arg = (unsigned char)arg;
	else if (t && f->size == H)
		arg = (unsigned short int)arg;
	else if (t && f->size == J)
		arg = (uintmax_t)arg;
	else if (t && f->size == Z)
		arg = (size_t)arg;
	else
		arg = (unsigned int)arg;
	f->tostring = ft_uintmax_itoa_type(arg, f->type);
	f->arg = ft_strdup(f->tostring);
}
