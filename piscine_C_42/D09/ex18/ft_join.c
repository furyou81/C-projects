/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:15:05 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 11:44:05 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cksize(char **tab);
int		cksize2(char *sep);

char	*ft_join(char **tab, char *sep)
{
	char	*string;
	int		var[4];

	var[3] = 0;
	var[2] = 0;
	var[0] = 0;
	string = (char *)malloc((cksize2(sep) * cksize(tab) - cksize2(sep)));
	while (tab[var[0]])
	{
		var[1] = 0;
		while (tab[var[0]][var[1]])
		{
			string[var[2]] = tab[var[0]][var[1]];
			var[2]++;
			var[1]++;
		}
		while (sep[var[3]])
		{
			string[var[2]] = sep[var[3]];
			var[2]++;
			var[3]++;
		}
		var[0]++;
	}
	return (string);
}

int		cksize(char **tab)
{
	int size;
	int i;
	int j;

	size = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			j++;
			size++;
		}
		i++;
	}
	return (size);
}

int		cksize2(char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}
