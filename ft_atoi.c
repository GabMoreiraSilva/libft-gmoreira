/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:18:06 by gmoreira          #+#    #+#             */
/*   Updated: 2022/05/14 20:18:08 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int		nb;
	int		sign;
	char	*ptr_c;

	nb = 0;
	sign = 1;
	ptr_c = (char *)c;
	while (*ptr_c == ' ' || *ptr_c == '\n' || *ptr_c == '\t'
		|| *ptr_c == '\r' || *ptr_c == '\v' || *ptr_c == '\f')
		ptr_c++;
	if (*ptr_c == '+' || *ptr_c == '-')
	{
		if (*ptr_c == '-')
			sign *= -1;
		ptr_c++;
	}
	while (ft_isdigit(*ptr_c))
	{
		nb = 10 * nb + (*ptr_c - 48);
		ptr_c++;
	}
	return (sign * nb);
}
