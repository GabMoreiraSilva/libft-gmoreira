/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:58:20 by coder             #+#    #+#             */
/*   Updated: 2022/04/26 20:25:40 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	index;

	if (!*little)
		return ((char *)big);
	len_little = ft_strlen(little);
	index = 0;
	while (big[index] && len >= len_little)
	{
		if (big[index] == *little
			&& ft_strncmp(big + index, little, len_little) == 0)
			return ((char *)big + index);
		index++;
		len--;
	}
	return (NULL);
}
