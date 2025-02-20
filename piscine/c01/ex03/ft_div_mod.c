/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:49:43 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/03 12:49:46 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Esta función divide los dos parámetros a y b
		- Almacena el resultado en div.
		- Almacena el resto en mod.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	div = 0;
	mod = 0;
	ft_putnbr(div);
	ft_putnbr(mod);
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putnbr(mod);
	return (0);
}
