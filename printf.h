/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:56:27 by naterrie          #+#    #+#             */
/*   Updated: 2022/11/18 15:23:47 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_F
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);

void	ft_putnbr(char c);
void	ft_putchar(char c);

#endif
