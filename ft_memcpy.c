/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 17:08:37 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	void	*naznacheniya;

	naznacheniya = dst;
	if (!dst && !src)
		return (0);
	while (n--)
		*((char *)dst++) = *((char *)src++);
	return (naznacheniya);
}
/*Funktsiya memcpy kopiruyet N baytov iz oblasti pamyati SRC
 v oblast' pamyati DST.
Yesli DST i SRC perekryvayutsya, povedeniye ne opredeleno. 
Prilozheniya v kotorom DST i SRC mogut perekryvat'sya,
 sleduyet ispol'zovat' memmove.*/