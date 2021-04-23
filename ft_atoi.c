/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/23 10:25:50 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int					a;
	long				znak;
	unsigned long long	otvet;

	a = 0;
	otvet = 0;
	znak = 1;
	while ((str[a] >= '\a' && str[a] <= '\r') || str[a] == ' ')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a++] == '-')
			znak = -1;
	}
	while (str[a] >= '0' && str[a] <= '9')
		otvet = ((otvet * 10) + (str[a++] - '0'));
	if (a > 19 || otvet >= 9223372036854775808ULL)
	{
		if (znak == 1)
			return (-1);
		return (0);
	}
	return ((int)(otvet * znak));
}
/* converts the initial portion of the string pointed 
to by str to int representation.*/
/* umnozhaya na 10 osvobozhdayu mesto dlya sled tsifr */
