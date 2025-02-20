/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:39:57 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/15 12:40:00 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void	ft_reverse_array(int *arr, int size);
void	ft_putnbr(int nb, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_str_is_numeric(char *str);
void	ft_strcpy(char *dest, char *src);
char	*ft_strstr(char *str, char *to_find);
void	intToStr(int num, char *str);
char	*read_dict(char *file);
#endif
