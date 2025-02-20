/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:43:08 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/13 17:57:37 by majorge-         ###   ########.fr       */
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

int	ft_iterative_power(int nb, int power)
{
	int	result;
	
	if (power < 0)
	{
		return (0);
	}
	
	if (power == 0)
	{
		return (1);
	}
	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	ft_putnbr(ft_iterative_power(6, 5));
	return (0);
}
