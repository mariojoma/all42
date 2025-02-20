/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:38:41 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/03 16:38:46 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que muestre uno a uno en la pantalla los caracteres de un string.
• La dirección del primer carácter del string está incluida en el puntero utilizado como
parámetro para a la función.
*/
#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	//write(1, "\n", 1); //Se añade debido a que si no se imprime % en la terminal al final.
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')  // Se verifica si el carácter actual no es '\0'
	{
		write(1, &str[i], 1);
		i++;  // Se avanza al siguiente carácter
	}
}

int	main(void)
{
	char	str[4] = "Hola";
	
	ft_putstr(str);
	return (0);
}
