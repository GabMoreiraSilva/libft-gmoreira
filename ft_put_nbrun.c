/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbrun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 22:07:23 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/24 22:17:30 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_nbrun(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_put_nbrun(nbr / 10);
	}
	ft_int_putchar_fd((char)(nbr % 10 + 48), 1);
	return (ft_nbrlen(nbr));
}
