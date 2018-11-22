/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:23:06 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:23:08 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_maxk(t_stk **stk)
{
	t_stk	*tmp;
	int		max;

	max = INT_MIN;
	tmp = *stk;
	if (tmp)
	{
		max = tmp->nb;
		while (tmp)
		{
			if (tmp->nb > max)
				max = tmp->nb;
			tmp = tmp->next;
		}
	}
	return (max);
}
