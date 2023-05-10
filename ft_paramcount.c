/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paramcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fda-estr <fda-estr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 03:12:46 by fda-estr          #+#    #+#             */
/*   Updated: 2023/05/10 01:45:15 by fda-estr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//O que é que acontece se usarmos %%%%...

int	ft_paramcount (char *s)
{
	int	nparam;

	nparam = 0;
	while (*s)
	{
		if (*s++ == '%')
		{
			if (*s++ != '%')
				nparam++;
		}
		s++;
	}
	return (nparam);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_paramcount("Ola %% o meu you "));
	printf("%%% roiffo");
}