/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:21:34 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/13 18:21:36 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

// Función recursiva para sumar dos números sin usar '+'
int suma(int a, int b) {
    if (b == 0) {
        ft_putnbr(a);
    	ft_putnbr(b);
    	ft_putchar('\n');
        return a; // Caso base: si b es 0, el resultado es a
    } else {
    	ft_putnbr(a);
    	ft_putnbr(b);
    	ft_putchar('\n');
        return suma(a + 1, b - 1); // Incrementa a y disminuye b hasta llegar a 0
    }
}

int main() {
    int num1 = 5, num2 = 3;
    printf("La suma de %d y %d es %d\n", num1, num2, suma(num1, num2));
    return 0;
}


