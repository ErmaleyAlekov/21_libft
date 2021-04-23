/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/19 18:17:59 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*novlst;
	t_list	*element;

	novlst = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&novlst, del);
			return (0);
		}
		ft_lstadd_back(&novlst, element);
		lst = lst->next;
	}
	return (novlst);
}
/*Iteriruyet spisok ’lst’ i primenyayet funktsiyu
’F’ k soderzhaniyu kazhdogo elementa. Sozdayet novyy
spisok, poluchennyy v rezul'tate posledovatel'nykh prilozheniy
funktsiya ’f’. Funktsiya ’del’ ispol'zuyetsya dlya
pri neobkhodimosti udalite soderzhimoye elementa.*/