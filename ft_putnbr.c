/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:44:05 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/25 20:49:24 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		size = size + ft_putchar('-');
		n = -n;
	}
	return (size + putnbr(n));
}

int	putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i = putnbr(nb / 10);
		i = i + putnbr(nb % 10);
	}
	else
	{
		i = i + ft_putchar(nb + 48);
	}
	return (i);
}
