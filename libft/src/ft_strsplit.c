/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ybarraul <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/08 12:58:59 by ybarraul     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/08 12:59:01 by ybarraul    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbr_words(char *str, char c)
{
	int		nbr_wrd;
	int		i;

	nbr_wrd = 0;
	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] >= 33 && str[i] <= 126)
			nbr_wrd++;
		while (str[i] != c && str[i])
			i++;
	}
	return (nbr_wrd);
}

static int		ft_nbr_ltr(char *str, char c)
{
	int		nb;

	nb = 0;
	while (str[nb] != c && str[nb])
		nb++;
	return (nb);
}

static void		ft_cpy(char *src, char *dest, int lenght)
{
	int		i;

	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char			**ft_strsplit(char const *str, char c)
{
	int		nbr_wrd;
	char	**tab;
	int		i;
	int		j;
	int		ltr;

	i = 0;
	j = -1;
	if (str == NULL)
		return (NULL);
	nbr_wrd = ft_nbr_words((char *)str, c);
	if (!(tab = (char **)malloc(sizeof(char *) * nbr_wrd + 1)))
		return (NULL);
	while (++j < nbr_wrd)
	{
		while (str[i] == c)
			i++;
		ltr = ft_nbr_ltr((char *)str + i, c);
		if (!(tab[j] = (char *)malloc(sizeof(*tab) * (ltr + 1))))
			return (NULL);
		ft_cpy((char *)str + i, tab[j], ltr);
		i = i + ltr;
	}
	tab[j] = 0;
	return (tab);
}
