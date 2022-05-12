/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 00:50:13 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/10 01:09:54 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	size_t	*ptr;
	size_t	len;
	size_t	check;

	check = nb * size;
	if (check / size != nb)
		return (NULL);
	if (nb == 0 || size == 0)
		return (NULL);
	else
	{
		len = nb * size;
		ptr = malloc (len);
		ft_bzero (ptr, len);
		return (ptr);
	}
}
