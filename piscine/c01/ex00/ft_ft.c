/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:19:24 by majorge-          #+#    #+#             */
/*   Updated: 2025/01/30 19:20:04 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)  // Manejo de negativos
	{
        	ft_putchar('-');
        	n = -n;
    	}	
	
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
    int num = 0;
    ft_putnbr(num);
    ft_ft(&num);
    ft_putnbr(num);
    return 0;
}
