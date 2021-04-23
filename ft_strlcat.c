/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 15:33:42 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		srcrazm;
	size_t	zna4raz;
	int		i;

	i = 0;
	srcrazm = 0;
	zna4raz = 0;
	while (src[srcrazm])
		srcrazm++;
	if (dstsize == 0)
		return (srcrazm);
	while (zna4raz < dstsize && dst[zna4raz])
		zna4raz++;
	if (dstsize <= zna4raz)
		return (dstsize + srcrazm);
	i = 0;
	while (dstsize && (--dstsize - zna4raz) && src[i])
	{
		dst[zna4raz + i] = src[i];
		i++;
	}
	dst[zna4raz + i] = '\0';
	return (srcrazm + zna4raz);
}
/*strlcat dobavlyayet stroku src v konets dst.
On budet dobavlyat ne boleye dstsize - strlen (dst) - 1 simvolov.*/