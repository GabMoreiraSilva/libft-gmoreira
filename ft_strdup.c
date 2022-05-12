/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:08:53 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/10 00:31:48 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(src) + 1;
	copy = malloc(size * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, src, size);
	return (copy);
}
