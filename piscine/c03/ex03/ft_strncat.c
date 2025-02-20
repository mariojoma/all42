/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:21:24 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/12 10:59:40 by majorge-         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	char *ptr = dest;

	// Mueve el puntero al final de dest
	while (*ptr) 
	{
		ptr++;
	}

	// Copia toda la cadena src en dest
	n = 0;
	while (n < nb && *src) {
		*ptr = *src;
		ptr++;
		src++;
		n++;
	}

	// Agrega el carácter nulo al final
	*ptr = '\0';

	return (dest);
}

int	main(void)
{
	char destino[20] = "Hola, ";
	char origen[] = "mundo!";
	
	//ft_putstr(ft_strcat(destino, origen));
	ft_putstr(ft_strncat(destino, origen, 4));
			
	return (0);
}
