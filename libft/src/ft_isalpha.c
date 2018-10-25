/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isalpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:01:34 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 13:58:35 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int isalpha;
	int islower;
	int isupper;

	islower = (c >= 'a' && c <= 'z');
	isupper = (c >= 'A' && c <= 'Z');
	isalpha = (isupper || islower);
	return (isalpha);
}
