/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrealloc.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 12:15:33 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 12:16:23 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrealloc(char **str, size_t size)
{
	char	*s;

	s = NULL;
	if (!(s = ft_strnew(size)))
		return (NULL);
	if (str && *str)
	{
		ft_strncpy(s, *str, size);
		free(*str);
		*str = s;
	}
	return (s);
}
