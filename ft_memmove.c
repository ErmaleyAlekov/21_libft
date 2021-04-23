/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:23:50 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char	*naznacheniya;
	char	*na4alo;

	naznacheniya = dst;
	na4alo = (char *)src;
	if (na4alo < naznacheniya)
	{
		naznacheniya += n - 1;
		na4alo += n - 1;
		while (n--)
		{
			*naznacheniya = *na4alo;
			naznacheniya--;
			na4alo--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
/*Funktsiya memmove kopiruyet kol baytov iz stroki SRC v stroku DST.
Dve stroki mogut perekryvat'sya; kopiya vsegda delayetsya v ne-
destruktivnym obrazom.*/