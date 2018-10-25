/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:00:44 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/06/11 14:07:46 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

static int	ft_iswhite(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' ||
			c == '\r' || c == '\t' || c == '\v');
}

int			ft_atoi(const char *str)
{
	unsigned int	ret;
	int				sign;

	ret = 0;
	sign = 1;
	while (ft_iswhite(*str))
		str++;
	if (ft_issign(*str))
		sign = (*str++ == '-' ? -1 : 1);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return ((int)ret * sign);
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return ((int)ret * sign);
}
