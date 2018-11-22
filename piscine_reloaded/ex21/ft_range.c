/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:33:41 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/08 18:57:11 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min < max)
	{
		tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
		i = 0;
		while (min < max)
			tab[i++] = min++;
		return (tab);
	}
	else
		return (0);
}
