/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 18:23:00 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/21 12:44:04 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char	*tampon;
	int		i;
	int		nbwords;

	nbwords = 0;
	while (tab[nbwords])
		nbwords++;
	i = 0;
	while (i < nbwords - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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
