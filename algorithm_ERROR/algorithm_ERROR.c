/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_ERROR.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:48:57 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/17 14:55:16 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

int	is_only_numbers(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] == ' ')
			j++;
		while (av[i][j])
		{
			while (av[i][j] == ' ')
				j++;
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				return (1);
			while ((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == ' ')
				j++;
		}
		i++;
	}
	return (0);
}

int	algorithm_error(int argc, char **argv)
{
	int	only_numbers;

	if (argc < 2 || argv[1][0] == '\0')
		return (1);
	only_numbers = is_only_numbers(argc, argv);
	if (only_numbers)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}

int	check_min_max(char **numbers)
{	
	long	num;
	int		index;

	index = 0;
	while (numbers[index])
	{
		num = ft_atol(numbers[index]);
		if (num > (long)2147483647 || num < (long)-2147483648)
		{
			index = 0;
			while (numbers[index])
			{
				free(numbers[index]);
				index++;
			}
			free(numbers);
			return (1);
		}
		index++;
	}
	return (0);
}
