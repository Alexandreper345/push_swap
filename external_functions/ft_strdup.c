/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:01:35 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:24:29 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*vec;

	i = 0;
	vec = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (vec == NULL)
		return (NULL);
	while (s[i])
	{
		vec[i] = s[i];
		i++;
	}
	vec[i] = '\0';
	return (vec);
}
