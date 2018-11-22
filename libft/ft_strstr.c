/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:58:50 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:21:06 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t size;

	size = ft_strlen(needle);
	if (size == 0)
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, size) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
