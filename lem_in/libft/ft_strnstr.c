/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:09:10 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:31:19 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			len1;
	size_t			i;
	char			*src;

	len1 = ft_strlen(needle);
	if (len1 == 0)
		return ((char *)(haystack));
	i = 0;
	src = ft_strsub(haystack, 0, len);
	while (src[i] && i < len)
	{
		if (src[i] == needle[0])
		{
			if (ft_strncmp((src + i), needle, len1) == 0)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
