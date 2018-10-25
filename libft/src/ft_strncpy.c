/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:54:39 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 14:04:28 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t src_len;

	src_len = ft_strlen(src);
	dst = (char *)ft_memcpy(dst, src, n);
	if (src_len < n)
		ft_bzero(&dst[src_len], n - src_len);
	return (dst);
}
