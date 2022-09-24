/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:00:15 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/24 22:17:50 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexupper(unsigned long int adress)
{
	char	hex[17];
	char	*list;
	int		temp;
	int		index;

	list = "0123456789ABCDEF";
	temp = 0;
	index = 0;
	if (adress == 0)
		return (ft_int_putchar_fd('0', 1));
	while (adress >= 1)
	{
		temp = adress % 16;
		adress = adress / 16;
		hex[index] = list[temp];
		index++;
	}
	temp = index;
	while (index-- > 0)
	{
		ft_int_putchar_fd(hex[index], 1);
	}
	return (temp);
}
