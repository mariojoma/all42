/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:06:09 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/08 17:06:11 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void ft_putnbr(int nb);
void ft_putchar(char c);
void ft_putstr(char *str);

int ft_atoi(char *str);
int ft_strlen(char *str);
int *get_numbers(char *str);
int check(int ac, char **av);
int check_double(int tab[4][4], int pos, int num);
int check_case(int tab[4][4], int pos, int entry[16]);

#endif
