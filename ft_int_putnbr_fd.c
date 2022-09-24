/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:15:41 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/24 22:17:21 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_putnbr_fd(int nb, int fd)
{
	int	sign;

	sign = 0;
	if (nb == -2147483648)
		return (ft_int_putstr_fd("-2147483648", 1));
	if (nb < 0)
	{
		ft_int_putchar_fd('-', 1);
		nb = (nb * -1);
		sign = 1;
	}
	if (nb >= 10)
	{
		ft_int_putnbr_fd(nb / 10, 1);
	}
	ft_int_putchar_fd((char)(nb % 10 + 48), fd);
	return (ft_nbrlen(nb) + sign);
}
