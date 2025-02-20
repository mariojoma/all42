/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:51:00 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/05 18:51:05 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		ft_putchar(dest[i]);
		i++;
	}
	dest[i] = '\0';

	return dest;
}

/*
char	*ft_strcpy(char *dest, char *src)
{
	char *ptr = dest;  // Guardamos la dirección inicial de 'dest'

	while (*src)  // Mientras no sea '\0'
	{
		*dest = *src;  // Copia el carácter de 'src' a 'dest'
		dest++;
		src++;
	}
	*dest = '\0';  // Agregar el carácter nulo al final

	return ptr;  // Retornar la dirección original de 'dest'
}
*/

int	main (void)
{
	char src[] = "Hola caracola";
	char dest[];
	
	ft_strcpy(dest, src);
	ft_putstr(dest);
	//printf("Resultado: %s\n", dest);
}
