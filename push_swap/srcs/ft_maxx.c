/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:30:15 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/19 14:47:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_maxx(t_stk **stk)
{
	t_stk	*tmp;
	int		max;
	int		maxx;

	tmp = *stk;
	maxx = INT_MIN;
	if (tmp)
	{
		max = INT_MIN;
		maxx = tmp->nb;
		while (tmp)
		{
			if (tmp->nb > max)
			{
				maxx = max;
				max = tmp->nb;
			}
			else if (tmp->nb > maxx)
				maxx = tmp->nb;
			tmp = tmp->next;
		}
	}
	return (maxx);
}
