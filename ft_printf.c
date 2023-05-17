/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:08:20 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/17 04:29:24 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	len = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{	
			str++;
			ft_param(&arg, *str, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	return (len);
}
