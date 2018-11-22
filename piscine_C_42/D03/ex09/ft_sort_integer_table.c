/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:46:01 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/17 16:35:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int x;
	int tampon;

	x = 0;
	tampon = 0;
	while (x < size - 1)
	{
		if (tab[x] > tab[x + 1])
		{
			tampon = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = tampon;
			x = 0;
		}
		else
			x++;
	}
}
