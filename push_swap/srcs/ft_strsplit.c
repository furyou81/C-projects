/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:24:07 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/16 11:34:43 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int		ft_count_words(char *s, char c)
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

char			**ft_strsplit(char *s, char c)
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
