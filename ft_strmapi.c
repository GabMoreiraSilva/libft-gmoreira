/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 02:56:15 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/11 04:32:21 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*answer;

	if (!s)
		return (NULL);
	answer = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!answer)
		return (NULL);
	count = 0;
	while (s[count])
	{
		answer[count] = f(count, s[count]);
		count++;
	}
	answer[count] = '\0';
	return (answer);
}
