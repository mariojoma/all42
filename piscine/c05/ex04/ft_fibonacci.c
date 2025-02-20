/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:04:00 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/13 20:04:03 by majorge-         ###   ########.fr       */
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
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		ft_putnbr(index);
		return (ft_fibonacci((index - 1)) + ft_fibonacci(index - 2));
}
 /*
 	ft_fibonacci(9) = ft_fibonacci(8) + ft_fibonacci(7)
	ft_fibonacci(8) = ft_fibonacci(7) + ft_fibonacci(6)
	ft_fibonacci(7) = ft_fibonacci(6) + ft_fibonacci(5)
	ft_fibonacci(6) = ft_fibonacci(5) + ft_fibonacci(4)
	ft_fibonacci(5) = ft_fibonacci(4) + ft_fibonacci(3)
	ft_fibonacci(4) = ft_fibonacci(3) + ft_fibonacci(2)
	ft_fibonacci(3) = ft_fibonacci(2) + ft_fibonacci(1)
	ft_fibonacci(2) = ft_fibonacci(1) + ft_fibonacci(0)
	ft_fibonacci(1) = 1  (Caso base)
	ft_fibonacci(0) = 0  (Caso base)
 
	ft_fibonacci(2) = 1 + 0 = 1
	ft_fibonacci(3) = 1 + 1 = 2
	ft_fibonacci(4) = 2 + 1 = 3
	ft_fibonacci(5) = 3 + 2 = 5
	ft_fibonacci(6) = 5 + 3 = 8
	ft_fibonacci(7) = 8 + 5 = 13
	ft_fibonacci(8) = 13 + 8 = 21
	ft_fibonacci(9) = 21 + 13 = 34
 */
int	main (void)
{
	ft_putnbr(ft_fibonacci(5));
	return (0);
}
