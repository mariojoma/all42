/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:28:28 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/06 11:28:32 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que invierta un array de int (el primer elemento va el último, etc).
• Los parámetros son un puntero a int y el número de int en el array.
*/
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

void	ft_putint_array(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		ft_putint(arr[i]);  
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_reverse_array(int *arr, int size)
{
	int i = 0;
	int temp;

	while (i < size / 2)  // Intercambia los elementos desde los extremos hacia el centro
	{
		temp = arr[i];  
		arr[i] = arr[size - 1 - i];  
		arr[size - 1 - i] = temp;  
		i++;
	}
}

int	ft_int_array_length(int *arr)
{
	int i = 0;
	
	// Asumimos que el array termina en un valor específico, por ejemplo, -1
	// Se puede cambiar el valor de terminación según las necesidades
	while (arr[i])  
	{
		i++;
	}
	return i;
}

int	main(void)
{
	int	arr[] = {12, 345, 6789, -42, 4};
	int	size = ft_int_array_length(arr) / ft_int_array_length(&arr[0]);

	ft_putint_array(arr, size);  // Imprime el array original
	ft_reverse_array(arr, size);  // Invierte el array
	ft_putint_array(arr, size);  // Imprime el array invertido

	return (0);
}
