/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:37:09 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:28:53 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_sa(t_list **stack)
{
	t_list	*val1;
	t_list	*val2;

	val1 = NULL;
	val2 = NULL;
	if (*stack && (*stack)->next)
	{
		val1 = (*stack);
		val2 = (*stack)->next;
		val1->next = val2->next;
		val2->next = val1;
		*stack = val2;
		write(1, "sa\n", 3);
	}
}
