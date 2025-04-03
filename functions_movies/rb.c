/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:34:57 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:28:46 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = NULL;
	second = NULL;
	last = NULL;
	if (*stack_b && (*stack_b)->next)
	{
		first = *stack_b;
		*stack_b = first->next;
		first->next = NULL;
		last = ft_lstlast(*stack_b);
		last->next = first;
		write(1, "rb\n", 3);
	}
}
