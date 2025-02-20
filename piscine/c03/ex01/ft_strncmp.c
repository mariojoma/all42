/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:06:59 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/12 10:52:12 by majorge-         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	} else if (s1[i] < s2[i])
	{
		return (-1);
	} else
	{
		return (1);
	}
}

int	main(void)
{
	ft_putnbr(ft_strncmp("Hola", "Holb", 3)); // iguales = 0 ya que solo compara "Hol"
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Hola", "Holb", 4));  // 'a' > 'b' = 1
	ft_putchar('\n');
	ft_putnbr(ft_strncmp("Holb", "Hola", 4));  // 'a' < 'b' = -1
	ft_putchar('\n');
	ft_putnbr(strncmp("Hola", "Holb", 3));  // iguales = 0 ya que solo compara "Hol"
	ft_putchar('\n');
	ft_putnbr(strncmp("Hola", "Holb", 4));  // 'a' > 'b' = 1
	ft_putchar('\n');
	ft_putnbr(strncmp("Holb", "Hola", 4));  // 'a' < 'b' = -1
	ft_putchar('\n');

	return (0);
}
