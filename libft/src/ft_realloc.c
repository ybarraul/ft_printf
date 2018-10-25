/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 12:02:58 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/07 10:40:13 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void **mem, size_t size)
{
	void	*realloc;

	realloc = NULL;
	if (!(realloc = (void *)malloc(size * sizeof(**mem))))
		return (NULL);
	if (*mem)
	{
		ft_memcpy(realloc, *mem, size);
		free(*mem);
		*mem = realloc;
	}
	return (realloc);
}
