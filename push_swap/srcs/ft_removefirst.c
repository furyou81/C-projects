/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removefirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 14:55:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/18 18:10:32 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_removefirst(t_stk **stk)
{
	t_stk *tmp;
	t_stk *tofree;

	tmp = *stk;
	tofree = *stk;
	if (tmp)
	{
		if (tmp->next)
			tmp = tmp->next;
		else
			tmp = 0;
	}
	*stk = tmp;
	free(tofree);
}
