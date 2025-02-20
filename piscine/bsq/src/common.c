/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:37:56 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/15 12:37:58 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		//ft_putchar(dest[i]);
		i++;
	}
	dest[i] = '\0';
}

void	ft_reverse_array(char *arr)
{
	int i = 0;
	int temp;
	int	size;
	int temparr;
	
	temparr = *arr;
	size = 1;
	while(temparr >= 10)
	{
		temparr /= 10;
		size++;
	}
	//size = ft_strlen(arr);
	while (i < size / 2)
	{
		temp = arr[i];  
		arr[i] = arr[size - 1 - i];  
		arr[size - 1 - i] = temp;  
		i++;
	}
}

void	ft_putnbr(int nb, char *str)
{
	char	stack[11];
	int		i;

	i = 0;
	while (nb > 0)
	{
		stack[i++] = (nb % 10) + '0';
		nb /= 10;
	}

	if (i == 0) // Caso especial si nb es 0
		stack[i++] = '0';

	while (i > 0)
		ft_putchar(stack[--i]);
		
	//Hay que darle la vuelta a stack
	ft_reverse_array(stack);
	ft_strcpy(str, stack);
}

/*
void intToStr(int num, char *str) {
    int i = 0, isNegative = 0;
    
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    while (num > 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }

    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0';

    // Invertir el string
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }
}
*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			is_numeric = 0;
		}
		i++;
	}
	return (is_numeric);
}

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

char	*read_dict(char *file)
{
	int		fd;
	int		ret;
	char	*buffer;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = malloc(BUF_SIZE);
	if (!buffer)
		return (NULL);
	ret = read(fd, buffer, BUF_SIZE - 1);
	if (ret == -1)
	{
		free(buffer);
		return (NULL);
	}
	buffer[ret] = '\0';
	close(fd);
	return (buffer);
}
