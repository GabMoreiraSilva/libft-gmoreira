/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:17:52 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:17:54 by gmoreira         ###   ########.fr       */
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
