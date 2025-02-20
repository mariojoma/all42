/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:56:44 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/12 10:51:52 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

char	*ft_strcat(char *dest, char *src)
{
	char *ptr = dest;

	// Mueve el puntero al final de dest
	while (*ptr) 
	{
		ptr++;
	}

	// Copia toda la cadena src en dest
	while (*src) {
		*ptr = *src;
		ptr++;
		src++;
	}

	// Agrega el carácter nulo al final
	*ptr = '\0';

	return (dest);
}

int	main(void)
{
	char destino[20] = "Hola, ";
	char origen[] = "mundo!";
	
	ft_putstr(ft_strcat(destino, origen));
		
	return (0);
}
