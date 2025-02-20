/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:50:49 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/11 17:51:55 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
amount = 0;
amount = x - '0' * 10 + amount;

1234
1
2 + 10 = 12
3 + 12 * 10 = 123
4 + 123 * 10 = 1234

Según chatgpt es amount = amount * 10 + (nuevo dígito - '0') pero también funciona
*/

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	
	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	int mine;
	int theirs;
	if (ac == 2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);
		printf("mine: %d | theirs: %d\n", mine, theirs);
	}
	return (0);
}
