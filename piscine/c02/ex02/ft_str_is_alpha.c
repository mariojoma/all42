/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:20:47 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/05 22:20:54 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n < 0)  // Manejo de negativos
	{
        	ft_putchar('-');
        	n = -n;
    	}	
	
	if (n >= 10)
		ft_putint(n / 10);
	ft_putchar((n % 10) + '0');
}

void	print_array(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		ft_putint(arr[i]);  // Imprime el número
		ft_putchar(' ');     // Espacio entre números
		i++;
	}
	ft_putchar('\n');  // Nueva línea al final
}

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	i;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			is_alpha = 0;
		}
		i++;
	}
	return (is_alpha);
}

int main (void)
{
	int	n;
	char	*str;
	
	str = "H5la";
	
	//n = -58;
	//ft_putint(n);
	ft_putint(ft_str_is_alpha(str));
}
