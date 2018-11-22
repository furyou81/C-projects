/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:22:34 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/21 12:42:26 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (size1 == 0 && size2 > 0)
		return (-s2[0]);
	if (size2 == 0 && size1 > 0)
		return (s1[0]);
	size1 = 0;
	while (s1[size1])
	{
		if (s1[size1] < s2[size1] || s1[size1] > s2[size1])
			return (s1[size1] - s2[size1]);
		size1++;
	}
	if (size1 < size2)
		return (-s2[size1]);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	char	*tampon;
	int		i;
	int		nbwords;

	nbwords = 0;
	while (tab[nbwords] != 0)
		nbwords++;
	i = 0;
	while (i < nbwords - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tampon = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tampon;
			i = 0;
		}
		else
			i++;
	}
}
