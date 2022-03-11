/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:20 by abernita          #+#    #+#             */
/*   Updated: 2022/03/11 12:02:53 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
//{
//	t_list *tmp;
//
//	if (!lst || !f)
//		return ;
//	tmp = lst;
//	while (tmp)
//	{
//		f(tmp->content);
//		tmp = tmp->next;
//	}
//}
