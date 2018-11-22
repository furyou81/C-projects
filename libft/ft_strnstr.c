/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:11:06 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:23:01 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		size;
	const char	*sub;

	size = ft_strlen(needle);
	if (size == 0)
		return ((char*)haystack);
	sub = ft_strsub(haystack, 0, len);
	i = 0;
	while (sub[i])
	{
		if (ft_strncmp(sub + i, needle, size) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (0);
}
