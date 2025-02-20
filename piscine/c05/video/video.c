/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   video.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majorge- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:37:39 by majorge-          #+#    #+#             */
/*   Updated: 2025/02/13 16:37:41 by majorge-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	f(int param1, int param2)
{
	char	local_var_1;
	char	local_var_2;
	
	// local_var_2 = g(local_var_1);
	
	if(param1 + param2 > 42)
		f(param1 + 1, param2 + 2);
}

char	g(char c)
{
	int other_local_var;
	return (other_local_var + 1);
}

int	main()
{
	int	a;
	int	b;
	
	f(3,4);
	return (0);
}
