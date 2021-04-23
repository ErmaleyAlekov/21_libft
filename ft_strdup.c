/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 16:12:55 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*zna4enie;
	int		dlina;

	dlina = 0;
	while (src[dlina])
		dlina++;
	zna4enie = (char *)malloc(sizeof(char) * (dlina + 1));
	if (zna4enie == 0)
		return (0);
	zna4enie[dlina + 1] = '\0';
	while (dlina > 0)
	{
		zna4enie[dlina] = src[dlina];
		dlina--;
	}
	zna4enie[0] = src[0];
	return (&zna4enie[dlina]);
}
/*Funktsiya strdup vydelyayet pamyati dlya kopii stroki,
vypolnyayet kopiyu i vozvrashchayet ukazatel' na neye.*/
