/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:16:06 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:16:08 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*anchor;

	if (dest == src || !n)
		return (dest);
	anchor = (char *)dest;
	while (n--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (anchor);
}
