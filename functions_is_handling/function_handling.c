/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:02:27 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/14 19:16:55 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_swap(long *a, long *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	find_two_min(t_list **stack, long *min1, long *min2)
{
	t_list	*current;

	current = *stack;
	*min1 = current->number;
	*min2 = current->next->number;
	if (*min1 > *min2)
		ft_swap(min1, min2);
	current = current->next->next;
	while (current)
	{
		if (current->number < *min1)
		{
			*min2 = *min1;
			*min1 = current->number;
		}
		else if (current->number < *min2)
			*min2 = current->number;
		current = current->next;
	}	
}

void	find_un_min(t_list **stack, long *min1)
{
	t_list	*current;

	current = *stack;
	*min1 = current->number;
	current = current->next;
	while (current)
	{
		if (current->number < *min1)
			*min1 = current->number;
		current = current->next;
	}
}

int	is_last_position(t_list **stack, long value)
{
	t_list	*current;
	int		len;
	int		position;

	current = *stack;
	len = 0;
	position = 0;
	while (current)
	{
		len++;
		current = current->next;
	}
	current = *stack;
	while (current)
	{
		if (current->number == value)
			break ;
		position++;
		current = current->next;
	}
	return (position == len - 1);
}

void	move_to_top(t_list **stack, long value)
{
	while ((*stack)->number != value)
	{
		if (is_last_position(stack, value))
			ft_rra(stack);
		else
			ft_ra(stack);
	}
}
