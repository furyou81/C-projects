/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:00:25 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 12:16:22 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int count;
	int j;

	j = 0;
	while (j < length)
	{
		i = 0;
		count = 1;
		while (i < length)
		{
			if (tab[i] == tab[j] && i != j)
				count++;
			i++;
		}
		if (count % 2 != 0)
			return (tab[j]);
		j++;
	}
	return (0);
}
