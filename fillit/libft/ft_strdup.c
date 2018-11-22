/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:16:42 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/13 15:45:26 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*new;

	size = 0;
	while (s1[size])
		size++;
	new = (char*)malloc(sizeof(*new) * size + 1);
	if (new == NULL)
		return (NULL);
	size = 0;
	while (s1[size])
	{
		new[size] = s1[size];
		size++;
	}
	new[size] = '\0';
	return (new);
}
