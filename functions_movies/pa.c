/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:32:42 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:28:39 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*swap;

	swap = NULL;
	if (*stack_b)
	{
		swap = *stack_b;
		*stack_b = (*stack_b)->next;
		swap->next = *stack_a;
		*stack_a = swap;
		write(1, "pa\n", 3);
	}
}
