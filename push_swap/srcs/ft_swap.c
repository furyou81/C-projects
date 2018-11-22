/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:00:21 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/10 16:01:02 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_swap(t_stk **stk, int size)
{
	t_stk *tmp;

	if (size >= 2)
	{
		tmp = (*stk)->next;
		(*stk)->next = (*stk)->next->next;
		tmp->next = *stk;
		*stk = tmp;
	}
}
