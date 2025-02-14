/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:33:25 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:28:44 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	last = NULL;
	first = NULL;
	if (*stack_a && (*stack_a)->next)
	{
		first = *stack_a;
		*stack_a = first->next;
		first->next = NULL;
		last = ft_lstlast(*stack_a);
		last->next = first;
		write(1, "ra\n", 3);
	}
}
