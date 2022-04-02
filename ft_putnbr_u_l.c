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

int	putnbr(unsigned int n, int i)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		putnbr(n / 10, i);
	i += ft_putchar_l(nb % 10 + '0');
	return (i);
}

int	ft_putnbr_u_l(unsigned int n)
{
	return (putnbr(n, 0));
}
