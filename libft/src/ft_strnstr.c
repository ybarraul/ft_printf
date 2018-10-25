/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:58:21 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:58:22 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	ret = NULL;
	while (i < (int)n && s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && s2[j] && s1[i] && i < (int)n)
		{
			i++;
			j++;
		}
		i -= j;
		if (!s2[j])
			return ((char *)s1 + i);
		i++;
	}
	if (!*s1 && !*s2)
		ret = (char *)s1;
	return (ret);
}
