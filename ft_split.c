/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:36:02 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nomer_stroki(char const *stroka, char c)
{
	unsigned int	i;
	unsigned int	nomer;

	i = 0;
	nomer = 0;
	while (stroka[i] && stroka[i] == c)
		i++;
	while (stroka[i])
	{
		if (stroka[i] == c)
		{
			nomer++;
			while (stroka[i] && stroka[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (stroka[i - 1] != c)
		nomer++;
	return (nomer);
}

static void	ft_sled_stroka(char **sledstr, unsigned int *sleddlina,
	char c)
{
	unsigned int	i;

	*sledstr += *sleddlina;
	*sleddlina = 0;
	i = 0;
	while (**sledstr && **sledstr == c)
		(*sledstr)++;
	while ((*sledstr)[i])
	{
		if ((*sledstr)[i] == c)
			return ;
		(*sleddlina)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	nomer;
	char			**tab;
	unsigned int	sleddlina;
	char			*sledstr;
	unsigned int	i;

	nomer = ft_nomer_stroki(s, c);
	tab = malloc(sizeof(char *) * (nomer + 1));
	i = 0;
	sledstr = (char *)s;
	sleddlina = 0;
	while (i < nomer)
	{
		ft_sled_stroka(&sledstr, &sleddlina, c);
		tab[i] = malloc(sizeof(char) * (sleddlina + 1));
		ft_strlcpy(tab[i], sledstr, sleddlina + 1);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
