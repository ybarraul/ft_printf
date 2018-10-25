/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:54:05 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:31:15 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int s1_len;
	int i;

	s1_len = ft_strlen(s1);
	i = 0;
	while ((int)n > i && *s2)
	{
		*(s1 + s1_len + i) = *(char *)s2;
		i++;
		s2++;
	}
	*(s1 + s1_len + i) = 0;
	return (s1);
}
