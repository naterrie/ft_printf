/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:55:11 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 16:26:01 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check_caracter(char c, va_list args)
{
	int	charset;

	charset = 0;
	if (c == 'c')
		ft_putchar(args);
	else if (c == 's')
		ft_putstr(args);
	else if (c == 'p')
		charset = 3;
	else if (c == 'd')
		charset = 4;
	else if (c == 'i')
		charset = 5;
	else if (c == 'u')
		charset = 6;
	else if (c == 'x')
		charset = 7;
	else if (c == 'X')
		charset = 8;
	else if (c == '%')
		write (1, '%', 1);
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start (args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			Check_Caracter(s[i++], args);
			i++;
		}
		ft_putchar(s[i]);
		i++;
	}
	va_end (args);
	return (0);
}
