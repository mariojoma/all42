/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:26:40 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/06 18:26:43 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Crea una función que devuelva 1 si el string usado como parámetro contiene únicamente caracteres alfabéticos en mayúsculas y devuelva 0 si contiene otro tipo de
caracteres.

Tendrá que devolver 1 si str es un string vacío

int ft_str_is_uppercase(char *str);
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

	while(n >= 10)
		ft_putint(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_str_is_uppercase(char *str)
{
	int i;
	int is_uppercase;
	
	is_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			is_uppercase = 0;
		}
		i++;
	}
	
	return (is_uppercase);
}

int	main(void)
{
	//int	n;
	char	str[5] = "HOLa";
	
	//n = -5;
	ft_putint(ft_str_is_uppercase(str));
	return (0);
}
