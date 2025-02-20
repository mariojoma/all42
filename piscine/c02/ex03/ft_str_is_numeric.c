/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:24:21 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/06 17:24:23 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Crea una función que devuelva 1 si el string usado como parámetro contiene únicamente dígitos y devuelva 0 si contiene otro tipo de caracteres.
*/
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

	while(n >= 10)
		ft_putint(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			is_numeric = 0;
		}
		i++;
	}
	return (is_numeric);
}


int	main(void)
{
	char	str[5] = "5689";
	int	n;
	n = -5;
	
	ft_putint(ft_str_is_numeric(str));
	//ft_putint(n);
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	int	i;
	
	i = 1;
	while(i < argc)
	{
		
		printf("%s is numeric=, %d\n", argv[i], ft_str_is_numeric(argv[i]));
		i++;		
	}

	return (0);
}
*/
