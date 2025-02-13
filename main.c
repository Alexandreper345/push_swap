/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 19:36:51 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/12 20:59:36 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	int		averror;
	int		node_array_error;

	stack_a = NULL;
	stack_b = NULL;
	averror = algorithm_ERROR(argc, argv);
	if (averror)
		return (1);
	build_stack_from_args(&stack_a,argc,argv);
	node_array_error = algorithm_safe_node(&stack_a, &stack_b);
	if (node_array_error)
	{
		ft_putstr_fd("Error\n", 2);
		free_list(stack_a);
		free_list(stack_b);
		return (1);
	}
	free_list(stack_a);
	free_list(stack_b);
	return (0);
}
