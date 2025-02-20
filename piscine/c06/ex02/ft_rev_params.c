/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 22:53:31 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/18 22:53:36 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

/*
void	ft_rev_int_tab(int *tab, int size)
{
	int	*inicio;
	int	*final;
	int	aux;
	
	inicio = tab;
	final = tab;
	aux = size;
	while(aux > 1)
	{
		final++;
		aux--;
	}
	while (inicio < final)
	{
		ft_swap(inicio, final);
		inicio++;
		final--;
	}
}
*/

void	ft_rev_params(char **args, int count)
{
	int	i;

	i = count - 1;
	while (0 < i)
	{
		ft_putstr(args[i]);
		i--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argv, argc);
	return (0);
}
