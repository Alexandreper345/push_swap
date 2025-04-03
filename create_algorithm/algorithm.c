/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:03:33 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 17:30:02 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	handle_three(t_list **stack)
{
	int	val1;
	int	val2;
	int	val3;

	val1 = (*stack)->number;
	val2 = (*stack)->next->number;
	val3 = (*stack)->next->next->number;
	if (val1 < val3 && val1 > val2)
		ft_sa(stack);
	else if (val2 > val1 && val2 > val3 && val1 > val3)
		ft_rra(stack);
	else if (val1 > val2 && val3 > val2)
		ft_ra(stack);
	else if (val1 > val2 && val2 > val3)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (val2 > val3 && val3 > val1)
	{
		ft_ra(stack);
		ft_sa(stack);
		ft_rra(stack);
	}
}

void	handle_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	long	min1;

	min1 = 0;
	current = *stack_a;
	find_un_min(stack_a, &min1);
	while ((*stack_a)->number != min1)
		ft_ra(stack_a);
	ft_pb(stack_a, stack_b);
	handle_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void	handle_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	long	min1;
	long	min2;

	min1 = 0;
	min2 = 0;
	current = *stack_a;
	find_two_min(stack_a, &min1, &min2);
	move_to_top(stack_a, min1);
	ft_pb(stack_a, stack_b);
	current = *stack_a;
	move_to_top(stack_a, min2);
	ft_pb(stack_a, stack_b);
	handle_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	radix(t_list **stack_a, t_list **stack_b, int *array, int size)
{
	int	index_bit;
	int	index;
	int	index_stack_b;
	int	size_stack_b;

	index_bit = 0;
	while (index_bit < 10)
	{
		if (is_list_sorted(stack_a, array, size))
			break ;
		index = 0;
		while (index < size)
		{
			if (*stack_a && ((*stack_a)->index >> index_bit) & 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			index++;
		}
		size_stack_b = ft_list_size(*stack_b);
		index_stack_b = 0;
		while (index_stack_b++ < size_stack_b)
			ft_pa(stack_a, stack_b);
		index_bit++;
	}
}

void	algorithm(t_list **stack_a, t_list **stack_b, int size, int *array)
{
	if (size > 5)
		radix(stack_a, stack_b, array, size);
	else if (size == 5)
		handle_five(stack_a, stack_b);
	else if (size == 4)
		handle_four(stack_a, stack_b);
	else if (size == 3)
		handle_three(stack_a);
	else if (size == 2)
		ft_sa(stack_a);
}
