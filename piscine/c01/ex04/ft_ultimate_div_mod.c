/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:29:06 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/03 16:29:08 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Esta función divide los int apuntados por a y b.
		El resultado de la división se almacena en el int apuntado por a.
		El resultado del resto de la división se almacena en el int apuntado por b
*/

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = c/d;
	*b = c%d;
}

int	main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 2;
	
	printf("Antes de la operación: x = %d, y = %d\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("Después de la operación: x = %d, y = %d\n", a, b);
	
	return (0);
}
