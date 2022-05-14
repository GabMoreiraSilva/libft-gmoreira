/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:16:13 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:16:16 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	unsigned char	*ptr_str1;
	unsigned char	*ptr_str2;
	size_t			index;

	ptr_str1 = (unsigned char *)str1;
	ptr_str2 = (unsigned char *)str2;
	index = 0;
	while (index < num)
	{
		if (ptr_str1[index] != ptr_str2[index])
			return ((int)(ptr_str1[index] - ptr_str2[index]));
		index++;
	}
	return (0);
}
