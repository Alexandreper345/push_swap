/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:18:05 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:26:58 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

int	ft_list_size(t_list *static_a)
{
	int	count;

	count = 0;
	while (static_a)
	{
		count++;
		static_a = static_a->next;
	}
	return (count);
}
