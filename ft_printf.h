/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:56:40 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/14 19:46:55 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int 	ft_printf(const char *str, ...);
void	ft_param(va_list *arg, char type, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(long int nbr, int *len);
void	ft_putnbrhexa(unsigned int nbr, int *len, int lowup);
void	ft_putunsigned(unsigned int nbr, int *len);

#endif