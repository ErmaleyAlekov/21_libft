/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/20 16:23:07 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_razmer(long n)
{
	int		razmer;

	razmer = 1;
	if (n < '\0')
	{
		razmer++;
		n = -n;
	}
	while (n >= '\n')
	{
		razmer++;
		n /= '\n';
	}
	return (razmer);
}
/*Uznau razmer stroki*/

char	*ft_itoa(int s)
{
	char	*str;
	long	ale;
	int		i;

	i = '\0';
	str = malloc(sizeof(char) * ft_razmer(s) + 1);
	if (!str)
		return (0);
	if (s < '\0')
		str['\0'] = '-';
	ale = s;
	if (ale < '\0')
		ale = -ale;
	str[ft_razmer(s) - i++] = '\0';
	while (ale >= '\n')
	{
		str[ft_razmer(s) - i++] = (ale % '\n') + '0';
		ale /= '\n';
	}
	str[ft_razmer(s) - i++] = (ale % '\n') + '0';
	return (str);
}
/*Dlya preobrazovaniya chisla v stroku*/