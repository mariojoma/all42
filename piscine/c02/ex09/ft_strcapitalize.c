/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:16:41 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/10 12:16:44 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

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

int	is_alpha(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	is_alphanumeric(char c)
{
	return (is_alpha(c) || ('0' <= c && c <= '9'));
}

int	to_upper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c = c - 32);
	return (c);
}

int	to_lower(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c = c + 32);
	return (c);
}

// "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (in_word == 0)
			{
				str[i] = to_upper(str[i]);
				in_word = 1;
			}
			else
				str[i] = to_lower(str[i]);
		}
		else
		{
			in_word = 0;
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	ft_putnbr(argc);
	ft_putchar('\n');

	if (argc <= 2)
	{
		i = 1; //No es 0 porque el primer argumento es el propio ./a.out
		while (i < argc)
		{
			ft_putstr(ft_strcapitalize(argv[i]));
			if (i < argc - 1)
				ft_putchar(' ');
			i++;
		}
	} else {
		ft_putstr("Error");
	}
	//char	*str;
	//char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	//str[5] = "hola";
	//ft_putstr(ft_strcapitalize(str2));
	return (0);
}
