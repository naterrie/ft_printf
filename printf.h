/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:20:45 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/21 19:20:47 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_ptr_len(int num);
int	ft_print_ptr(void *ptr);
int	ft_printf(const char *s, ...);
int	ft_putunsigned_nbr(unsigned int nb);
int	ft_Check_Caracter(char *c, va_list args);
int	ft_putptr(unsigned long long nbr, int n);
int	ft_puthexa_nbr(unsigned int nbr, const char *base);

#endif
