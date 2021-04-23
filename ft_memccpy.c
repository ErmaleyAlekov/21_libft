/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:19:22 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	char	*zna4;
	char	*str;
	size_t	i;

	i = 0;
	zna4 = (char *)dest;
	str = (char *)src;
	while (i < n)
	{
		zna4[i] = str[i];
		if (zna4[i] == (char)c)
			return ((void *)&zna4[i + 1]);
		i++;
	}
	return (0);
}
/* kopiruyet bayty iz stroki SRC v stroku DEST. Yesli simvol C vstrechayetsya v
stroke SRC, kopirovaniye ostanavlivayetsya
i ukazatel' na bayt posle kopii C v stroke DEST vozvrashchayetsya.
v protivnom sluchaye kopiruyetsya N baytov,
     i vozvrashchayetsya 0 ukazatel'*/