/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 15:35:06 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	if (!dst || !src)
		return (0);
	a = 0;
	while (src[a])
		a++;
	if (dstsize == 0)
		return (a);
	a = 0;
	while (src[a] && a < dstsize - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = 0;
	a = 0;
	while (src[a])
		a++;
	return (a);
}
/*kopiruyet do dstsize - 1 simvolov iz stroki src v dst,
zavershaya rezul'tat 0, yesli dstsize ne = 0.*/