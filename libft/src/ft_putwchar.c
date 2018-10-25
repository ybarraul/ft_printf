/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putwchar.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/19 10:46:24 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/21 15:39:11 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <wchar.h>
#include <unistd.h>
#include "libft.h"

void	ft_putwchar(wchar_t c)
{
	ft_putwchar_fd(c, 1);
}