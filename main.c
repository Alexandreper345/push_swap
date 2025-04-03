/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:36:51 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 19:29:03 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	free_both(t_list *stack_a, t_list *stack_b)
{
	free_list(stack_a);
	free_list(stack_b);
}

int	is_sorted(t_list *stack)
{
	t_list	*current;

	if (!stack)
		return (0);
	if (has_duplicate_numbers(&stack))
	{
		free_list(stack);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	current = stack;
	while (current->next != NULL)
	{
		if (current->number > current->next->number)
			return (0);
		current = current->next;
	}
	free_list(stack);
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		averror;
	int		node_array_error;

	stack_a = NULL;
	stack_b = NULL;
	averror = algorithm_error(argc, argv);
	if (averror)
		return (0);
	build_stack_from_args(&stack_a, argc, argv);
	if (ft_list_size(stack_a) == 0)
		return (0);
	if (is_sorted(stack_a))
		return (0);
	node_array_error = algorithm_safe_node(&stack_a, &stack_b);
	if (node_array_error)
	{
		ft_putstr_fd("Error\n", 2);
		free_both(stack_a, stack_b);
		return (0);
	}
	free_both(stack_a, stack_b);
	return (0);
}
