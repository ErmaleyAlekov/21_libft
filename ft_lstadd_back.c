/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/19 18:13:56 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*poslednyy;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	poslednyy = ft_lstlast(*lst);
	poslednyy->next = new;
}
/*Dobavlyayet novyy element v konets spiska.
new = Adres ukazatelya na element, kotoryy budet
dobavlen v spisok.
lst = Adres ukazatelya na pervuyu ssylku
spiska.*/
