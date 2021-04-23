/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:20:55 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*s2;
	char	ale;
	size_t	i;

	i = 0;
	s2 = (char *)s;
	ale = (char)c;
	while (i < n && s2[i] != ale)
		i++;
	if (i < n && s2[i] == ale)
		return (&s2[i]);
	return (0);
}
/*Funktsiya memchr nakhodit pervoye vkhozhdeniye C
(preobrazovannogo v simvol bez znaka) v stroke S.*/