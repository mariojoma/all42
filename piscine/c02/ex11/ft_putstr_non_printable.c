/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:05:31 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/10 16:05:33 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
La función hexadecimal(int n) toma un número entero n y lo convierte a su representación hexadecimal en formato de dos caracteres.

La operación n / 16 devuelve el "dígito alto" (la parte más significativa) del valor hexadecimal.
La operación n % 16 devuelve el "dígito bajo" (la parte menos significativa).
Luego, simbols[n / 16] y simbols[n % 16] se usan para obtener los caracteres correspondientes a estos dos dígitos hexadecimales.

Por ejemplo, si n es 255 (que es 0xff en hexadecimal), tenemos:

n / 16 es 15, y simbols[15] es 'f'.
n % 16 es 15, y simbols[15] es 'f'.
Así, la función imprimirá \ff.
*/
void	hexadecimal(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n % 16]);
}

int	is_printable(char c)
{
	return (' ' <= c && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
/*
& 0xff:

0xff es el número hexadecimal 255 (o 11111111 en binario).
La operación bit a bit & 0xff se usa para asegurar que solo se conserven los últimos 8 bits del valor, útil cuando se trabaja con caracteres en sistemas que podrían manejar más de 8 bits.
*/
			hexadecimal(str[i] & 0xff);
		}
		i++;
	}
}

int	main(void)
{
	char str[] = "Hola\n\t123\x01\x02\x7F";

	ft_putstr_non_printable(str);

	return (0);
}
