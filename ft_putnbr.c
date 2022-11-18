/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:44:05 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 18:26:20 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbrhexa(int n, char *hexa)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

int	ft_unsigned_putnbr(unsigned int n)
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
