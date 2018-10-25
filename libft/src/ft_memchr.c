/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:05:13 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:41:21 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	car;
	unsigned char	*str;

	i = 0;
	car = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == car)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
