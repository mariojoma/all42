/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:09:46 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/06 18:09:49 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//int ft_str_is_lowercase(char *str);

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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lower_case;

	is_lower_case = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			is_lower_case = 0;
		}
		i++;
	}
	return (is_lower_case);
}

int	main(void)
{
	int	n;
	char	*str;

	return (0);
}
