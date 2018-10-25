/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:50:17 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:50:18 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && i == 0)
		{
			str[i] -= 32;
			i++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && i > 0 &&
				(str[i - 1] < '0' || str[i - 1] > '9'))
		{
			str[i] -= 32;
			i++;
		}
		while (str[i] >= 'a' && str[i] <= 'z' && str[i] != '\0')
			i++;
		i++;
	}
	return (str);
}
