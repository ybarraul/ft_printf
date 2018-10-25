/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtolower.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 12:14:51 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 12:15:14 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *str)
{
	char *s;

	s = str;
	if (!s)
		return (NULL);
	while (*s)
	{
		*s = (wchar_t)ft_tolower(*s);
		s++;
	}
	return (str);
}
