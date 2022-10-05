/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixLen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:20 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/25 21:05:50 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_matrixlen(void **matrix)
{
	int	counter;

	counter = 0;
	while (matrix[counter] != NULL)
	{
		counter++;
	}
	return (counter);
}
