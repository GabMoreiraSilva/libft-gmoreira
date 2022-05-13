/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:50:13 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/13 05:18:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	void	*ptr;
	size_t	len;
	size_t	check;

	if (nb == 0 || size == 0)
		return (NULL);
	check = nb * size;
	if (check / size != nb)
		return (NULL);
	else
	{
		len = nb * size;
		ptr = malloc (len);
		if (!ptr)
			return (NULL);
		ft_bzero (ptr, len);
		return (ptr);
	}
}
