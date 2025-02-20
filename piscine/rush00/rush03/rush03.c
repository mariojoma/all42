/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:26:35 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/01 22:35:04 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	count_lin;
	int	count_a;
	int	count_b;

	if (y < 1 || x < 1)
	{
		return ;
	}
	count_lin = 1;
	while (count_lin <= y)
	{
		if (count_lin == 1 | count_lin == y)
		{
			ft_putchar('A');
			count_a = 1;
			count_b = x - 2;
			while (count_a <= count_b )
			{
				ft_putchar('B');
				count_a++;
			}
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
			count_a = 1;
			count_b = x - 2;
			while (count_a <= count_b )
			{
				ft_putchar(' ');
				count_a++;
			}
			ft_putchar('B');
		}
	ft_putchar('\n');
	count_lin++;
	}
}
