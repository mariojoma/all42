/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:06:46 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/10 12:06:48 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Crea una función que ponga cada letra en minúscula.
• El prototipo de la función deberá ser el siguiente:
	char *ft_strlowcase(char *str);
• Deberá devolver str.
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

char 	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	//int	n;
	char	str[5] = "AoRZ";
	
	//n = -5;
	//ft_putint(ft_str_is_uppercase(str));
	
	ft_putstr(ft_strlowcase(str));
	return (0);
}
