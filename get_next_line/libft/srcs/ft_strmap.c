/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:48:32 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 11:04:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	size;
	size_t	i;

	if (s != NULL && f != NULL)
	{
		size = ft_strlen(s);
		new = ft_strnew(size);
		if (new == NULL)
			return (NULL);
		i = 0;
		while (i < size)
		{
			new[i] = f(s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
