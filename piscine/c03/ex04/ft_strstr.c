/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:00:21 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/12 11:00:23 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

/*
char	*ft_strstr(char *str, char *to_find) {
	int	a = 0;
	int	b;

	if (!*to_find)
	{
		return (str);
	}
		

	while (str[a] != '\0')
	{
        	b = 0;
        	while (str[a + b] == to_find[b] && to_find[b] != '\0')
        	{
            		b++;
        	}
		if (to_find[b] == '\0')
		{
		    return &str[a];
		}
		a++;
    	}
    	return 0;
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}



int	main(void)
{
	int	i;
	char texto[] = "Hola, mundo mun ndo o m caracola!";
	char buscar[] = "mundo";

	char *resultado;
	resultado = strstr(texto, buscar);
	//char *resultadoBueno = ft_strstr(texto, buscar);
	
	if (resultado)
	{
		ft_putstr("Encontrado.\n");
		i = 0;
		while (i < ft_strlen(buscar))
		{
			ft_putchar(resultado[i]);  // Imprime solo "mundo"
			//ft_putchar(resultadoBueno[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putstr(resultado); // Imprime "mundo!"
		//ft_putstr(resultadoBueno);
	} 
	else
	{
		ft_putstr("No encontrado.\n");
	}
	return (0);
}
