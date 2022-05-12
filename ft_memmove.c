/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:46:30 by gmoreira          #+#    #+#             */
/*   Updated: 2022/04/19 02:38:11 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_str1;
	char	*ptr_str2;

	ptr_str1 = (char *) dest;
	ptr_str2 = (char *) src;
	if (ptr_str1 > ptr_str2)
	{
		while (n--)
			ptr_str1[n] = ptr_str2[n];
		return (dest);
	}
	ft_memcpy(ptr_str1, ptr_str2, n);
	return (dest);
}
