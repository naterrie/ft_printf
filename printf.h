/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:56:27 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 16:26:33 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_F
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *s, ...);

int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_Check_Caracter(char *c, va_list args);

#endif
