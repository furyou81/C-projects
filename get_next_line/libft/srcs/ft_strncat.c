/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:05:22 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/13 15:51:59 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t size1;
	size_t i;

	size1 = 0;
	while (s1[size1])
		size1++;
	i = 0;
	while (i < n && s2[i])
		s1[size1++] = s2[i++];
	s1[size1] = '\0';
	return (s1);
}
