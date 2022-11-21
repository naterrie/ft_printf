/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:44:05 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/21 14:02:30 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexnbr(unsigned int nbr, const char *base)
{
	int	count;

	i = 0;
	if (nbr > 15)
	{
		count = ft_puthexnbr(nbr / 16, base);
		count += ft_puthexnbr(nbr % 16, base);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}

int	ft_putunsigned(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i = ft_putunsigned(nb / 10);
		i += ft_putunsigned(nb % 10);
	}
	else
	{
		i += ft_putchar(nb + 48);
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int				count;
	unsigned int	nb;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (0);
}
