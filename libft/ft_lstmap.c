/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 03:04:50 by jajung            #+#    #+#             */
/*   Updated: 2021/03/03 03:04:54 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_list;
	t_list	*new_list;

	first_list = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		if (!(new_list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first_list, del);
			return (NULL);
		}
		ft_lstadd_back(&first_list, new_list);
		lst = lst->next;
	}
	return (first_list);
}
