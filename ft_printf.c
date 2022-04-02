/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:29:36 by hrolle            #+#    #+#             */
/*   Updated: 2022/04/02 20:28:08 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		y;

	i = 0;
	y = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i' || str[i] == 'u')
				y += ft_putnbr(va_arg(args, int)) - 2;
			else if (str[i] == 'x')
				y += ft_putnbr_base(va_arg(args, int), "0123456789abcdef") - 2;
			else if (str[i] == 'X')
				y += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF") - 2;
			else if (str[i] == 'p')
			{
				y += ft_putstr("0x");
				y += ft_putnbr_base(va_arg(args, int), "0123456789abcdef") - 2;
			}
			else if (str[i] == 'c')
				y += ft_putchar(va_arg(args, char) - 2;
			else if (str[i] == 's')
				y += ft_putstr(va_arg(args, char *)) - 2;
			else if (str[i] == '%')
				y += ft_putchar('%') - 2;
		}
		i++;
	}
	va_end(args);
	return (i + y);
}
