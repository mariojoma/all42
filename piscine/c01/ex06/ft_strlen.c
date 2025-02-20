/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:58:48 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/03 16:58:51 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Escribe una función que cuente el número de caracteres de un string y que devuelva
el número encontrado.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putint(n / 10);
	ft_putchar((n % 10) + '0');
}

int	fr_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	
	return i;
}

int	main(void)
{
	char	str[] = "Hola";
	
	int	total;

	total = fr_strlen(str);
	
	ft_putnbr(total);
	
	return (0);
}
