/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:14:50 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/22 11:02:18 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

static size_t	ft_minvalue(size_t d, size_t size)
{
	if (d < size)
		return (d);
	else
		return (size);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;
	size_t i;
	size_t size2;
	size_t res;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	res = ft_minvalue(d, size) + s;
	i = 0;
	size2 = (size == 0) ? 0 : size - 1;
	while (d + i < size2 && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (res);
}
