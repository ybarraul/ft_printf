/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_destructors.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:47 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 08:43:47 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_del_format_lst(t_format *f)
{
	if (f)
	{
		if (f->next)
			ft_del_format_lst(f->next);
		free(f->tostring);
		free(f->arg);
		free(f->form);
		free(f);
	}
}
