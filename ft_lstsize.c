/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 22:02:12 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/18 05:57:47 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr_lst;

	ptr_lst = lst;
	count = 0;
	while (ptr_lst)
	{
		count++;
		ptr_lst = ptr_lst->next;
	}
	return (count);
}
