/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 17:21:56 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/17 17:21:58 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "functions.h"

int	main(int argc, char **argv)
{
	int	*arr;
	int	len;
	int	len_file;
	int	i;
	int	j;
	int	test;
	//int	file;
	//int	ret;
	//int	numbytes;
	int	n;
	int	m;
	char	*file;
	//char	buffer[1024];
	char	*ptrn;
	char	*ptrm;
	char	*ptrn2;
	char	*ptrm2;
	char	*tempmalloc1;
	char	*tempmalloc2;
	char	*dict;
	
	if (!(argc == 1))
	{
		//write(1, "Error\n", 6);
		return (0);
	}
	test = ft_str_is_numeric(argv[1]);
	if (!test)
	{
		//write(1, "Error\n", 6);
		return (0);	
	}
	len = ft_strlen(argv[1]);
	//ft_putnbr(len);
	arr = malloc(len * 4);
	i = 0;
	while (i < len)
	{
		arr[i]=argv[1][i] - 48;
		i++;
	}
	/*
	i = 0;
	
	while (i < len)
	{
		ft_putnbr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
	*/
	if (argc == 2)
	{
		file = malloc(12 * 1);
		file = "numbers.dict";
	}
	else
	{
		len_file = ft_strlen(argv[2]);
		file = malloc(len_file * 1);
		ft_strcpy(file, argv[2]);
	}
	
	

	dict = read_dict(file);

	//close(file);
	free(tempmalloc1);
	free(tempmalloc2);
	free(ptrn);
	free(ptrm);
	free(dict);
	free(arr);
	free(file);
	return (0);
}
