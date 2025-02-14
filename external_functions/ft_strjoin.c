/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:04:06 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/13 19:24:31 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*vec;
	int		i;
	int		j;

	i = 0;
	j = 0;
	vec = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
	{
		vec[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		vec[i] = s2[j];
		j++;
		i++;
	}
	vec[i] = '\0';
	return (vec);
}
