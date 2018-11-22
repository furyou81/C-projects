/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 22:19:57 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/23 23:20:43 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int	nbw;
	int	i;

	i = 0;
	nbw = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else
		{
			nbw++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (nbw);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**str;
	int		nbw;

	if (s == NULL)
		return (NULL);
	nbw = ft_count_words(s, c);
	if ((str = (char **)malloc(sizeof(*str) * (nbw + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < nbw)
	{
		count = -1;
		while (s[i] == c)
			i++;
		while (++count >= -1 && s[i] != c && s[i])
			i++;
		str[j++] = ft_strsub(s, ((i++) - count), count);
	}
	str[j] = 0;
	return (str);
}
