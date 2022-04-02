/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrolle <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:16:37 by hrolle            #+#    #+#             */
/*   Updated: 2021/12/16 22:07:04 by hrolle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_base(unsigned int n, char *str, int size, int i)
{
	unsigned int	nb;

	nb = n;
	if (n >= size)
		putnbr_base(n / size, str, size, i);
	i += ft_putchar_l(str[nb % size]);
	return (i);
}

int	ft_putnbr_base_l(int n, char *str)
{
	if (n < 0)
	{
		ft_putchar_l('-');
		return (putnbr_base(n * -1, str, ft_strlen(str), 0) + 1);

	}
	return (putnbr_base(n, str, ft_strlen(str), 0));
}
