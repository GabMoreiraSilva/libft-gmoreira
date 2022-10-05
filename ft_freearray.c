/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:29:24 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/25 23:40:33 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freearray(void **ptr)
{
	int	index;
	
	index = 0;
	while (ptr[index] != NULL)
	{
		free(ptr[index]);
		ptr = NULL;
		index++;
	}
}