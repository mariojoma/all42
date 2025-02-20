/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:08:52 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/10 15:08:54 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	if (!src)
		return (0);
	l = ft_strlen(src);
	if (size == 0)
		return (l);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}

int	main(void)
{
	//Definimos un buffer para dest
	char dest[6];  // Espacio para 5 caracteres más el '\0'
	    
	// Definimos la cadena de origen
	char *src = "Hola Mundo";

	// Usamos sizeof para copiar la cadena
	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
	
	/* Aparentemente no se puede utilizar ft_strlen ya que copia todos los caracteres (10)
	y solamente debería imprimir 6 ya que el tamaño de dest es 6.
	*/

	ft_putstr(dest);	//Tiene que ser "Hola "
	ft_putchar('\n');
	ft_putnbr(len);		// Longitud total de src, debería ser 10
	
	return (0);
}
