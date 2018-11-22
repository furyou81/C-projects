/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:56:23 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:28:44 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	const char	*s1;
	char		cc;
	size_t		size;

	s1 = s;
	cc = (char)c;
	size = ft_strlen(s);
	i = 0;
	while (s1[i] != cc && i < size)
		i++;
	if (s1[i] == cc)
		return (char *)(s1 + i);
	return (NULL);
}
