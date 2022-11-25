/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:48:47 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/25 20:49:24 by naterrie         ###   ########lyon.fr   */
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
