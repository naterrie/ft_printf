/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:44:05 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 15:47:33 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr('-');
		ft_putnbr('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putnbr('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putnbr(n + 48);
	return (0);
}
