/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:27:34 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/13 17:41:28 by majorge-         ###   ########.fr       */
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

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;
	int	n;
	
	n = nb;
	result = nb;
	i = 0;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (i < n)
	{	
		nb--;
		if (nb != 0)
		{
			result = result * nb;
		}
		i++;
	}
	return result;
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(8));
	ft_putchar('\n');
	return (0);
}
