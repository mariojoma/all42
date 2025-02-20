/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 21:15:37 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/06 21:15:40 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n >= 10)
		ft_putint(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n1 != '7' || n2 != '8' || n3 != '9')
					write (1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
