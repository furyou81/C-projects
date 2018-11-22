/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:55:45 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:32:26 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		len;
	int			i;
	const char	*src;

	src = haystack;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)src);
	i = 0;
	while (src[i])
	{
		if (src[i] == needle[0])
		{
			if (ft_strncmp((src + i), needle, len) == 0)
				return ((char *)(src + i));
		}
		i++;
	}
	return (NULL);
}
