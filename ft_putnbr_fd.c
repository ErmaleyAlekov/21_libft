/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/18 14:29:39 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int a, int fd)
{
	if (a == 0)
		ft_putchar_fd('0', fd);
	if (a == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (a < 0 && a != -2147483648)
	{
		ft_putchar_fd('-', fd);
		a = -a;
	}
	if (a <= 9 && a > 0)
		ft_putchar_fd(a + '0', fd);
	else if (a > 0)
	{
		ft_putnbr_fd(a / '\n', fd);
		ft_putchar_fd(a % '\n' + '0', fd);
	}
}
/*Preobrazovaniye inta v stroke*/