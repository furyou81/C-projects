/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:16:26 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/14 19:22:22 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *retval;

	retval = (int *)malloc(sizeof(*retval) * length);
	i = 0;
	while (i < length)
	{
		retval[i] = f(tab[i]);
		i++;
	}
	return (retval);
}
