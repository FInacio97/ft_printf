/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:38:22 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/13 19:19:19 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_param(va_list *arg, char type, int *len)
{
	if (type == 'c')
		ft_putchar(va_arg(*arg, int), len);
	if (type == '%')
		ft_putchar('%', len);
	if (type == 's')
		ft_putstr(va_arg(*arg, char *), len);
}