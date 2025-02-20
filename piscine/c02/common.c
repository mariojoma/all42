/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:39:30 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/10 12:39:32 by majorge-         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

void 	ft_charlowcase(char *c)
{
	if (isupper(*c))
		*c += 32;
}

void 	ft_charupcase(char *c)
{
	if (islower(*c))
		*c -= 32;
}

int	isalnum(char c)
{
	return (isupper(char c) || islower(char c) || isnumber(char c));
}

int	isupper(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	islower(char c)
{
	return ('a' <= c && c <= 'z');
}

int	isnumber(char c)
{
	return ('0' <= c && c <= '9');
}
