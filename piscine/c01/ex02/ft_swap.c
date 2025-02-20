/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:04:41 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/02 13:04:47 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
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
	if (n >= 10)  // Si hay más de un dígito, sigue dividiendo
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');  // Imprime el último dígito
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a;
	int b;
	
	a = 5;
	b = 10;
	
	ft_putnbr(a);
	ft_putnbr(b);
    	//printf("Antes del intercambio: x = %d, y = %d\n", a, b);
    	ft_swap(&a, &b);
    	ft_putchar('\n');
	ft_putnbr(a);
	ft_putnbr(b);
    	//printf("Después del intercambio: x = %d, y = %d\n", a, b);
    	
    	return (0);
}
