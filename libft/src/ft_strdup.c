/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:51:46 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 14:13:31 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	s_len;

	if (!s1)
		return (NULL);
	s_len = (size_t)ft_strlen(s1);
	if (!(dup = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	dup[s_len] = 0;
	dup = ft_strcpy(dup, s1);
	return (dup);
}
