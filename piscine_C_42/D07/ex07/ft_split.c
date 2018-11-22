/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:19:25 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/18 12:26:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		incharset(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		nbwords(char *str, char *charset)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (incharset(charset, str[i]) == 1
			&& str[i] != '\0')
		i++;
	while (str[i])
	{
		while (incharset(charset, str[i]) == 0 && str[i] != '\0')
			i++;
		nb++;
		while (incharset(charset, str[i]) == 1
				&& str[i] != '\0')
			i++;
	}
	return (nb);
}

void	sizewords(char *str, int *size, int nbwords, char *charset)
{
	int i;
	int s;

	while (incharset(charset, *str) == 1 && *str != '\0')
		str++;
	i = 0;
	while (i < nbwords - 1)
	{
		s = 0;
		while (incharset(charset, *str) == 0 && *str != '\0')
		{
			str++;
			s++;
		}
		while (incharset(charset, *str) == 1 && *str != '\0')
			str++;
		size[i] = s;
		i++;
	}
	size[i] = 1;
}

char	**ft_split(char *str, char *charset)
{
	char	**chars;
	int		i;
	int		j;
	int		size[nbwords(str, charset)];
	int		y;

	sizewords(str, size, nbwords(str, charset) + 1, charset);
	chars = (char **)malloc(sizeof(*chars) * (nbwords(str, charset) + 1));
	i = 0;
	y = 0;
	while (i < nbwords(str, charset) + 1)
	{
		chars[i] = (char *)malloc(sizeof(**chars) * size[i] + 1);
		j = 0;
		while ((incharset(charset, str[y])) == 1 && str[y] != '\0')
			y++;
		while (incharset(charset, str[y]) == 0 && str[y] != '\0')
			chars[i][j++] = str[y++];
		chars[i][j] = '\0';
		i++;
	}
	chars[nbwords(str, charset)] = 0;
	return (chars);
}
