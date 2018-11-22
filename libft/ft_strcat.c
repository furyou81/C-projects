/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:39:35 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/11 12:04:04 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t size1;
	size_t i;

	size1 = 0;
	while (s1[size1])
		size1++;
	i = 0;
	while (s2[i])
		s1[size1++] = s2[i++];
	s1[size1] = '\0';
	return (s1);
}
