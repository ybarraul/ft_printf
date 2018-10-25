/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:04:15 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:47:12 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	new->content = NULL;
	new->content_size = 0;
	if (content)
	{
		new->content = ft_memcpy((void *)malloc(content_size),
				content, content_size);
		if (!new->content)
			return (NULL);
		new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
