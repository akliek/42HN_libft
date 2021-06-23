/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akliek <akliek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:43:55 by akliek            #+#    #+#             */
/*   Updated: 2021/06/23 15:55:42 by akliek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_lst;
	t_list	*res_node;

	if (!f || !del)
		return (NULL);
	res_lst = NULL;
	while (lst)
	{
		if (!(res_node = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&res_node, del);
			return (NULL);
		}
		ft_lstadd_back(&res_lst, res_node);
		lst = lst->next;
	}
	return (res_lst);
}
