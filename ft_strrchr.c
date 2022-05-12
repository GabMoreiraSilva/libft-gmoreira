/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:52:23 by coder             #+#    #+#             */
/*   Updated: 2022/05/11 03:53:05 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		len;

	len = ft_strlen(str);
	ptr = (char *)str;
	while (len >= 0)
	{
		if (ptr[len] == (unsigned char)c)
			return (ptr + len);
		len--;
	}
	return (0);
}
