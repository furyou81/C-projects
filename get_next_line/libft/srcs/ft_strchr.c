/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:37:14 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/26 13:04:08 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

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
