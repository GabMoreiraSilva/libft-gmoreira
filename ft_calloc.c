/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:50:13 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/12 02:16:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	size_t	*ptr;
	size_t	len;
	size_t	check;

	check = nb * size;
	if (nb == 0 || size == 0)
		return (NULL);
	if (check / size != nb)
		return (NULL);
	else
	{
		len = nb * size;
		ptr = malloc (len);
		ft_bzero (ptr, len);
		return (ptr);
	}
}
