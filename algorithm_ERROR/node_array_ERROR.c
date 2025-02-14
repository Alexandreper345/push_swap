/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_array_ERROR.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:39:30 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:55:09 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

int	has_duplicate_numbers(t_list **stack)
{
	t_list	*current;
	t_list	*fixer;

	current = *stack;
	fixer = current;
	while (fixer)
	{
		current = fixer;
		while (current->next)
		{
			if (fixer->number == current->next->number)
				return (1);
			current = current->next;
		}
		fixer = fixer->next;
	}
	return (0);
}

int	is_list_sorted(t_list **stack, int *array, int size)
{
	t_list	*current;
	int		index;

	index = 0;
	current = *stack;
	while (current && index < size)
	{
		if (current->number != array[index])
			return (0);
		current = current->next;
		index++;
	}
	return (1);
}

int	safe_create_node_array(t_list **stack, int *array, int size)
{
	int	duplicate_number;
	int	sorted;

	duplicate_number = has_duplicate_numbers(stack);
	sorted = is_list_sorted(stack, array, size);
	if (duplicate_number)
		return (1);
	return (0);
}
