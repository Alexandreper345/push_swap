/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:35:27 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/11 21:35:32 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_rra(t_list **stack_a)
{
	t_list	*prev;
	t_list	*current;

	current = *stack_a;
	prev = NULL;
	if (*stack_a && (*stack_a)->next != NULL)
	{
		while (current->next)
		{
			prev = current;
			current = current->next;
		}
		current->next = *stack_a;
		prev->next = NULL;
		*stack_a = current;
		write(1, "rra\n", 4);
	}
}
