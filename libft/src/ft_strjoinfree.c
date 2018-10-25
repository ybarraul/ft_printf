/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoinfree.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 12:12:33 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:25:22 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*join;

	if (!(join = ft_strjoin(s1, s2)))
		return (NULL);
	if (s1)
		free(s1);
	if (s2)
		free(s2);
	return (join);
}
