/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:49:17 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:15:53 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	swap;

	index = 0;
	while (index < (size - 1))
	{
		while (tab[index] > tab[index + 1])
		{
			swap = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = swap;
			index = 0;
		}
		index++;
	}
}

void	lst_index(int *array, t_list **stack, int size)
{
	t_list	*current;
	int		index;

	current = *stack;
	index = 0;
	while (current)
	{
		index = 0;
		while (index < size)
		{
			if (current->number == array[index])
			{
				current->index = index;
				break ;
			}
			index++;
		}
		current = current->next;
	}
}

int	*array_of_list(t_list **stack, int size)
{
	t_list	*current;
	int		*array;
	int		index;

	current = *stack;
	index = 0;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (current)
	{
		array[index] = current->number;
		current = current->next;
		index++;
	}
	ft_sort_int_tab(array, size);
	lst_index(array, stack, size);
	return (array);
}
