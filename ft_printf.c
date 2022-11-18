/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:55:11 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 18:06:40 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_caracter(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, char));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		return (0); // Adresse de la variable
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_putnbrhexa(va_arg(args, int), "abcdef");
	else if (c == 'X')
		ft_putnbrhexa(va_arg(args, int), "ABCDEF");
	else if (c == '%')
		write (1, '%', 1);
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!s)
		return (0);
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_check_caracter(s[i++], args);
			i++;
		}
		ft_putchar(s[i]);
		i++;
	}
	va_end (args);
	return (0);
}
