/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 03:15:36 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/06 02:42:27 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (src[index] && index + 1 < size)
	{
		dest[index] = src[index];
		index++;
	}
	if (size > 0)
		dest[index] = '\0';
	index = ft_strlen(src);
	return (index);
}
