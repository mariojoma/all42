/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:23:00 by majorge-          #+#    #+#             */
/*   Updated: 2025/01/30 19:23:38 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
void	ft_putnbr(int n) //Si sé que n es de dos dígitos
{
	if (n >= 10)
		ft_putchar((n / 10) + '0');  // Extrae la decena y la convierte en carácter
	ft_putchar((n % 10) + '0');  // Extrae la unidad y la convierte en carácter
}
*/

void	ft_putnbr(int n)
{
	if (n >= 10)  // Si hay más de un dígito, sigue dividiendo
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');  // Imprime el último dígito
}

void	ft_ultimate_ft(int *********nbr)
{
	//ft_putchar(*********nbr + '0');
	*********nbr = 42;
}

int	main(void)
{
    int value = 0;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;
    
    ft_putnbr(value);
    ft_ultimate_ft(ptr9);
    ft_putnbr(value);
    
    return (0);
}

