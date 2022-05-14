/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:13:49 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:13:52 by gmoreira         ###   ########.fr       */
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
