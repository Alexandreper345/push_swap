/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:35:44 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/11 21:35:49 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_rrb(t_list **stack_b)
{
	t_list	*prev;
	t_list	*curr;

	prev = NULL;
	if ((*stack_b)->next != NULL && *stack_b)
	{
		curr = *stack_b;
		while (curr->next)
		{
			prev = curr;
			curr = curr->next;
		}
		curr->next = *stack_b;
		prev->next = NULL;
		*stack_b = curr;
		write(1, "rrb\n", 4);
	}
}
