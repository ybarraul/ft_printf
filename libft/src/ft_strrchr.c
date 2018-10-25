/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:58:31 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:58:32 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *to;

	to = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			to = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (to);
}
