/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:02:07 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/12 10:52:33 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	main(void)
{
	ft_putnbr(ft_strcmp("Hola", "Hola"));  // 0
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("Hola", "Holb"));  // -1
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("Holc", "Hola"));  // 1
	ft_putchar('\n');
	ft_putnbr(strcmp("Hola", "Hola"));  // 0
	ft_putchar('\n');
	ft_putnbr(strcmp("Hola", "Holb"));  // -1
	ft_putchar('\n');
	ft_putnbr(strcmp("Holc", "Hola"));  // 1
	ft_putchar('\n');

	return (0);
}

