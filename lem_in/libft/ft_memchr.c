/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:58:44 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/10 14:38:13 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s1;
	size_t					i;

	s1 = s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return (void *)(s1 + i);
		i++;
	}
	return (NULL);
}
