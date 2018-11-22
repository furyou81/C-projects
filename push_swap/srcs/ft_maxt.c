/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:36:23 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/19 14:46:21 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int		ft_maxt(t_stk **stk, int n)
{
	t_stk	*tmp;

	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb > n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
