/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:40:07 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/19 12:40:13 by majorge-         ###   ########.fr       */
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

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 0) 
	{
		ft_putnbr(nb);
		ft_putnbr(power);
		ft_putchar('\n');
		return 1; // Caso base: si power es 0, el resultado es 1
	} else 
	{
		ft_putnbr(nb);
		ft_putnbr(power);
		ft_putchar('\n');
		return (nb * ft_recursive_power(nb, power - 1));
	}
	
	6 * ( 6 * ( 6 * (6 * 1) )
}

int	main (void)
{
	ft_putnbr(ft_recursive_power(6, 4));
	return (0);
}
