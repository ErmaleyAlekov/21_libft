/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 15:48:06 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*stroka;
	unsigned int	i;

	if (!s)
		return (0);
	i = 0;
	stroka = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (stroka == 0)
		return (0);
	while (s[i])
	{
		stroka[i] = f(i, s[i]);
		i++;
	}
	stroka[i] = '\0';
	return (stroka);
}
/*Primenyayet funktsiyu ’f’ k kazhdomu simvolu
stroki ’s’ dlya sozdaniya novoy stroki (s pomoshch'yu malloc)
v rezul'tate posledovatel'nogo primeneniya 'f'.*/