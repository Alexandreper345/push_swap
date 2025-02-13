/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_frees.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:41:18 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/12 20:09:23 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void free_list(t_list *lst)
{
	t_list *temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}