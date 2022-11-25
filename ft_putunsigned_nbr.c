/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:49:18 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/25 20:49:24 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
