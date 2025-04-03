/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_safe_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:24:31 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 17:30:11 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

int	algorithm_safe_node(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	*array;
	int	node_array_error;

	size = ft_list_size(*stack_a);
	array = array_of_list(stack_a, size);
	node_array_error = safe_create_node_array(stack_a, array, size);
	if (node_array_error)
	{
		free(array);
		return (1);
	}
	else
		algorithm(stack_a, stack_b, size, array);
	free(array);
	return (0);
}
