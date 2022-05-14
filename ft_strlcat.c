/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:14:13 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:14:15 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index_src;
	size_t	index_dest;

	index_dest = ft_strlen(dst);
	index_src = 0;
	while ((index_dest + index_src + 1) < size && src[index_src])
	{
		dst[index_dest + index_src] = src[index_src];
		index_src++;
	}
	dst[index_dest + index_src] = '\0';
	while (src[index_src])
		index_src++;
	if (index_dest >= size)
		return (index_src + size);
	return (index_dest + index_src);
}
