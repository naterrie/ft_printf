/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:44:05 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/21 19:57:29 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_nbr(unsigned int nbr, const char *base)
{
	int	count;

	count = 0;
	if (nbr > 15)
	{
		count = ft_puthexa_nbr(nbr / 16, base);
		count += ft_puthexa_nbr(nbr % 16, base);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}

int	ft_putunsigned_nbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count = ft_putunsigned_nbr(nb / 10);
		count += ft_putunsigned_nbr(nb % 10);
	}
	else
	{
		count += ft_putchar(nb + 48);
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;
	int	nb;

	nb = n;
	count = 0;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -nb;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return (count);
}
