/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:55:11 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 21:18:05 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_caracter(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(args, char));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i = ft_print_ptr(va_arg(args, void *));
	else if (c == 'd')
		i = ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		i = ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (c == 'x')
		i = ft_putnbrhexa(va_arg(args, int), "abcdef");
	else if (c == 'X')
		i = ft_putnbrhexa(va_arg(args, int), "ABCDEF");
	else if (c == '%')
	{
		write (1, '%', 1);
		i++;
	}
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
			i = ft_check_caracter(s[i++], args);
			i++;
		}
		ft_putchar(s[i]);
		i++;
	}
	va_end (args);
	return (0);
}
