/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 11:37:25 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/14 16:21:36 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	new = (char*)malloc(sizeof(*new) * (size + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size + 1)
		new[i++] = '\0';
	new[i] = '\0';
	return (new);
}
