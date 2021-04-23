/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:22:18 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;
	char	*str1ng;
	char	*stringi;

	str1ng = (char *)s1;
	stringi = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1ng[i] == stringi[i] && i < n - 1)
		i++;
	return ((unsigned char)str1ng[i] - (unsigned char)stringi[i]);
}
/*Funktsiya memcmp sravnivayet baytovuyu stroku s1 s baytovoy strokoy s2.
Predpolagayetsya, chto obe stroki imeyut dlinu N baytov.*/