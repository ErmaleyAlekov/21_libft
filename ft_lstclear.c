/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/19 18:14:51 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*staryy;

	while (*lst)
	{
		del((*lst)->content);
		staryy = *lst;
		*lst = staryy->next;
		free(staryy);
	}
	*lst = 0;
}
/*Udalyayet i osvobozhdayet dannyy element i kazhdyy
preyemnik etogo elementa, ispol'zuya funktsiyu ’del’
i free.*/