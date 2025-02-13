/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:03:33 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/12 21:08:03 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"


void	radix(t_list **stack_a, t_list **stack_b, int *array, int size)
{
	int	index_bit;
	int	index;
	
}

void	algorithm(t_list **stack_a, t_list **stack_b, int size, int *array)
{
	if (size > 5)
		radix(stack_a,stack_b,array,size);
	else if (size == 5)
		handle_five(stack_a,stack_b);
	else if (size == 4)
		handle_four(stack_a, stack_b);
	else if (size == 3)
		handle_three(stack_a);
	else if (size == 2)
		ft_sa(stack_a);
}