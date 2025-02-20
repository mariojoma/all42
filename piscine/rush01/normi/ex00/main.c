/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:16:29 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/09 12:16:31 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		check(int ac, char **av);
int		*get_numbers(char *str);
int		solve(int tab[4][4], int entry[16], int pos);
void	display_solution(int tab[4][4]);
void	ft_putstr(char *str);

int	main(int ac, char **av)
{
	int	tab[4][4];
	int	i;
	int	j;
	int	*entry;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	if (check(ac, av) == 1)
		return (0);
	entry = get_numbers(av[1]);
	if (solve(tab, entry, 0) == 1)
		display_solution(tab);
	else
		ft_putstr("Did not find any solutions\n");
	free(entry);
	return (0);
}
