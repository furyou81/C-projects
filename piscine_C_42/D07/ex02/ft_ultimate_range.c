/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 19:31:43 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/16 12:06:00 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *r;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		r = (int *)malloc(sizeof(*r) * (max - min));
	}
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = r;
	return (i);
}
