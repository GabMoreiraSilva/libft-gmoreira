/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:56:04 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/24 22:17:36 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned long int adress)
{
	int	count;

	if (!adress)
	{
		return (ft_int_putstr_fd("(nil)", 1));
	}
	ft_int_putstr_fd("0x", 1);
	count = ft_puthexlower((unsigned long int)adress) + 2;
	return (count);
}
