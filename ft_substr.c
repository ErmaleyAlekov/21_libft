/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 18:12:39 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				i;
	unsigned int		dlina;
	char				*otvet;

	if (!s)
		return (0);
	otvet = malloc(sizeof(char) * 1);
	dlina = ft_strlen(s);
	if (!otvet)
		return (0);
	if (dlina < start)
	{
		otvet[0] = '\0';
		return (otvet);
	}
	otvet = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		otvet[i] = s[start + i];
		i++;
	}
	otvet[i] = '\0';
	return (otvet);
}
/*Vydelyayet (s pomoshch'yu malloc) i vozvrashchayet podstroku
iz stroki ’s’.
Podstroka nachinayetsya s indeksa ’start’ i imeyet
maksimal'nyy razmer ’len’.*/