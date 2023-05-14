/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:19:29 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/14 19:24:20 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putunsigned(nbr / 10, len);
		ft_putunsigned(nbr % 10, len);
	}
	else
		ft_putchar(nbr + 48, len);
}