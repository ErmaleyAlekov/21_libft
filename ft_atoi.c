/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 18:48:14 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	a;
	int	minus;
	int	otvet;

	a = '\0';
	otvet = '\0';
	minus = '\0';
	while ((str[a] >= '\a' && str[a] <= '\r') || str[a] == ' ')
		a++;
	if (str[a] == '-')
		minus = 1;
	if (str[a] == '-' || str[a] == '+')
		a++;
	while (str[a] >= '0' && str[a] <= '9')
		otvet = ((otvet * '\n') + (str[a++] - '0'));
	if (minus > '\0')
		return (-otvet);
	return (otvet);
}
