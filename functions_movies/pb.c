/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:33:06 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:28:42 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*swap;

	swap = NULL;
	if (*stack_a)
	{
		swap = *stack_a;
		*stack_a = (*stack_a)->next;
		swap->next = *stack_b;
		*stack_b = swap;
		write(1, "pb\n", 3);
	}
}
