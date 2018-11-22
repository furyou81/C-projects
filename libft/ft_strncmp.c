/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:35:34 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 15:46:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*ss1;
	const char	*ss2;
	size_t		i;

	if (n == 0)
		return (0);
	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (i < n - 1 && ss1[i] != '\0' && ss2[i] != '\0' && ss1[i] == ss2[i])
		i++;
	return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
}
