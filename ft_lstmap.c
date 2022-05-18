/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:48:02 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/18 16:00:23 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	if (!lst)
		return (NULL);
	newlst = NULL;
	while(lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
			ft_lstclear(&node, (*del));
		else
			ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return(newlst);
}
