/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 17:26:39 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	est1i(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	razmer;
	char			*na4alo;
	char			*konec;
	char			*rezult;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && est1i(s1[i], set))
		i++;
	na4alo = (char *)&s1[i];
	i = (ft_strlen(s1) - 1);
	if (i != -1)
		while (i >= 0 && est1i(s1[i], set))
			i--;
	konec = (char *)&s1[i];
	if (!*s1 || konec == na4alo)
		razmer = 2;
	else
		razmer = konec - na4alo + 2;
	rezult = malloc(sizeof(char) * razmer);
	ft_strlcpy(rezult, na4alo, razmer);
	return (rezult);
}
/*Vydelyayet (s pomoshch'yu malloc) i vozvrashchayet kopiyu
’S1’ s udalennymi simvolami, ukazannymi v ’set’
ot nachala i do kontsa stroki.*/