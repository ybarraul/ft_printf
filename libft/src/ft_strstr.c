/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:59:11 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:59:13 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char *s1_bis;
	const char *s2_bis;

	if (*s2 == '\0')
		return ((char*)s1);
	while (*s1 != '\0')
	{
		s1_bis = s1;
		s2_bis = s2;
		while (*s2_bis != '\0' && *s1_bis == *s2_bis)
		{
			s1_bis++;
			s2_bis++;
		}
		if (*s2_bis == '\0')
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
