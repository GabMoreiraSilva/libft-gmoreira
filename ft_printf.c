/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoreira <gmoreira@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:17:51 by gmoreira          #+#    #+#             */
/*   Updated: 2022/09/24 22:16:47 by gmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_flag(const char *str_char, va_list args)
{
	if (*str_char == 'c')
		return (ft_int_putchar_fd(va_arg(args, int), 1));
	else if (*str_char == 's')
		return (ft_int_putstr_fd(va_arg(args, char *), 1));
	else if (*str_char == 'p')
		return (ft_puthex_fd(va_arg(args, unsigned long int)));
	else if (*str_char == 'd' || *str_char == 'i')
		return (ft_int_putnbr_fd(va_arg(args, int), 1));
	else if (*str_char == 'u')
		return (ft_put_nbrun((va_arg(args, unsigned int))));
	else if (*str_char == 'x')
		return (ft_puthexlower((va_arg(args, unsigned int))));
	else if (*str_char == 'X')
		return (ft_puthexupper((va_arg(args, unsigned int))));
	else if (*str_char == '%')
		return (ft_int_putchar_fd('%', 1));
	else
		return (ft_int_putchar_fd(*str_char, 1));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	if (!str)
		return (-1);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if ((*str == '%') && (*str + 1 != '%'))
		{
			str++;
			count += check_flag(str, args);
			str++;
		}
		else
		{
			ft_int_putchar_fd(*str, 1);
			str++;
			count += 1;
		}
	}
	va_end(args);
	return (count);
}
