/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:06:14 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:42:44 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d >= s && d < s + len && len)
	{
		while (len)
		{
			*(d + len - 1) = *(s + len - 1);
			len--;
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
