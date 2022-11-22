/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:37:33 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/22 14:05:03 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long nbr, int n)
{
	char	*src;
	int		count;

	src = "0123456789abcdef";
	count = 0;
	if (n == 0)
		write (1, "0x", 2);
	if (nbr > 15)
	{
		count = ft_putptr(nbr / 16, 1);
		count += ft_putptr(nbr % 16, 1);
	}
	else
		count += ft_putchar(src[nbr]);
	return (count);
}
