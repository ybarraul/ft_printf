/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:02 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:40:52 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	car;
	unsigned char	*d;
	unsigned char	*s;

	car = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (n)
	{
		while (n--)
		{
			*d = *s;
			if (*s == car)
				return ((void *)d + 1);
			d++;
			s++;
		}
	}
	return (NULL);
}
