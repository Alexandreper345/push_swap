/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:59:41 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 21:02:51 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

char	*ft_strjoin_with_space(int argc, char **argv)
{
	char	*joined;
	char	*temp;
	int		index;

	index = 1;
	joined = ft_strdup("");
	while (index < argc)
	{
		temp = joined;
		joined = ft_strjoin(joined, argv[index]);
		free(temp);
		if (index + 1 < argc)
		{
			temp = joined;
			joined = ft_strjoin(joined, " ");
			free(temp);
		}
		index++;
	}
	return (joined);
}

void	build_stack_from_args(t_list **stack, int argc, char **argv)
{
	char	*joined_args;
	char	**numbers;
	int		index;
	long	num;

	index = 0;
	joined_args = ft_strjoin_with_space(argc, argv);
	numbers = ft_split(joined_args, ' ');
	free(joined_args);
	if (check_min_max(numbers))
	{
		ft_putstr_fd("Error\n", 2);
		return ;
	}
	while (numbers[index])
	{
		num = ft_atol(numbers[index]);
		ft_lstadd_back(stack, ft_lstnew(num));
		free(numbers[index]);
		index++;
	}
	free(numbers);
}
