/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 15:17:41 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rezult;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (0);
	rezult = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (!rezult)
		return (0);
	while (*s1)
		rezult[i++] = *s1++;
	while (*s2)
		rezult[i++] = *s2++;
	rezult[i] = '\0';
	return (rezult);
}
/*soyedinyaet stroku s1 i s2*/