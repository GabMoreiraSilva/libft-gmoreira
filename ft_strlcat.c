/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:54:35 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/06 01:46:12 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index_src;
	size_t	index_dest;

	index_dest = ft_strlen(dst);
	index_src = 0;
	while (index_dest + index_src + 1 < size && src[index_src])
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
