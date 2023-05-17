/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:06:18 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/17 04:26:22 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(unsigned long int ad, int *len)
{
	if (ad > 15)
	{
		ft_putaddress((ad / 16), len);
		ft_putaddress((ad % 16), len);
	}
	else if (ad < 16)
	{
		ft_putchar(HEXA_LOW[ad], len);
	}
}

void	ft_adress(unsigned long int ad, int *len)
{
	if (!ad)
		ft_putstr("(nil)", len);
	else
	{
		ft_putstr("0x", len);
		ft_putaddress(ad, len);
	}
}
