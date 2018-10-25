/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:59:31 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:59:32 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			&& s[start] != '\0')
		start++;
	while ((s[end - 1] == ' ' || s[end - 1] == '\t' || s[end - 1] == '\n')
			&& end > start)
		end--;
	len = end - start;
	return (ft_strsub(s, start, len));
}
