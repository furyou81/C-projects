/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:37:14 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:20:46 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ss;
	size_t		size;
	size_t		i;

	ss = s;
	size = ft_strlen(s);
	i = 0;
	while (s[i] != (char)c && i < size)
		i++;
	if (s[i] == (char)c)
		return ((void*)ss + i);
	return (0);
}
