/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strgen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/06/12 08:43:48 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/12 08:43:48 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_strgen(int c, int len)
{
	char	*gen;

	if (!(gen = ft_strnew(len)))
		return (NULL);
	gen = ft_memset(gen, c, len);
	return (gen);
}
