/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:37:23 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/13 16:18:04 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int inc;

	inc = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(*range) * (max - min));
	while (min < max)
	{
		range[inc] = min;
		min++;
		inc++;
	}
	return (range);
}
