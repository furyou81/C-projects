/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 16:20:07 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/16 12:13:32 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbwords(char *str)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			&& str[i] != '\0')
		i++;
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
			i++;
		nb++;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				&& str[i] != '\0')
			i++;
	}
	return (nb);
}

void	sizewords(char *str, int *size, int nbwords)
{
	int i;
	int s;

	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0')
		str++;
	i = 0;
	while (i < nbwords - 1)
	{
		s = 0;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
		{
			str++;
			s++;
		}
		while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0')
			str++;
		size[i] = s;
		i++;
	}
	size[i] = 1;
}

char	**ft_split_whitespaces(char *str)
{
	char	**chars;
	int		i;
	int		j;
	int		size[nbwords(str)];
	int		y;

	sizewords(str, size, nbwords(str) + 1);
	chars = (char **)malloc(sizeof(*chars) * (nbwords(str) + 1));
	i = 0;
	y = 0;
	while (i < nbwords(str) + 1)
	{
		chars[i] = (char *)malloc(sizeof(**chars) * size[i] + 1);
		j = 0;
		while ((str[y] == ' ' || str[y] == '\t' || str[y] == '\n')
				&& str[y] != '\0')
			y++;
		while (str[y] != ' ' && str[y] != '\t' && str[y] != '\n'
				&& str[y] != '\0')
			chars[i][j++] = str[y++];
		chars[i][j] = '\0';
		i++;
	}
	chars[nbwords(str)] = 0;
	return (chars);
}
