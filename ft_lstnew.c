/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:33:14 by uterese           #+#    #+#             */
/*   Updated: 2021/04/19 18:20:02 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*novyy;

	novyy = malloc(sizeof(t_list));
	if (!novyy)
		return (0);
	novyy->content = content;
	novyy->next = 0;
	return (novyy);
}
/*Vydelyayet (s pomoshch'yu malloc) i vozvrashchayet novyy
element. Initsializiruyetsya znacheniye peremennoy ’content’
so znacheniyem parametra ’content’.*/