/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:08:20 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/13 21:01:48 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int len;
	va_list arg;

	len = 0;
	va_start(arg, str);
	while(*str)
	{
		if(*str == '%')
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

int main()
{
	printf("%d\n", ft_printf("%%Francisco %s d%c Estrel%c Ina%cio%% %d %i %u\n", "Miguel", 'a', 'a', 'c', 1234, -1234, 123));
	printf("\n\n");
	printf("%d\n", printf("%%Francisco %s d%c Estrel%c Ina%cio%% %d %i %u\n", "Miguel", 'a', 'a', 'c', 1234, -1234, 123));
}