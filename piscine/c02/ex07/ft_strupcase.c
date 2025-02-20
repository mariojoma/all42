/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:35:52 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/07 12:35:55 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Crea una función que ponga cada letra en mayúscula.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char 	*ft_strupcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	//int	n;
	char	str[5] = "AoRz";
	
	//n = -5;
	//ft_putint(ft_str_is_uppercase(str));
	
	ft_putstr(ft_strupcase(str));
	return (0);
}
