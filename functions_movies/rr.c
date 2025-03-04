/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:35:13 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:32:26 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_a;
	t_list	*first_b;
	t_list	*last_a;
	t_list	*last_b;

	if ((*stack_a)->next && *stack_a && (*stack_b)->next && *stack_b)
	{
		first_a = *stack_a;
		first_b = *stack_b;
		*stack_a = first_a->next;
		*stack_b = first_b->next;
		first_a->next = NULL;
		first_b->next = NULL;
		last_a = ft_lstlast(*stack_a);
		last_b = ft_lstlast(*stack_b);
		last_a->next = first_a;
		last_b->next = first_b;
		write(1, "rr\n", 3);
	}
}
