/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:52:51 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:52:53 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (dest[i] && i < n)
		i++;
	while (src[j] && (i + j) < (n - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < n)
		dest[i + j] = 0;
	return (i + ft_strlen(src));
}
