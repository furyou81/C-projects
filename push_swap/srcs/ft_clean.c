/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 14:37:03 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/18 18:45:26 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void		ft_cleanlist(t_stk **stk)
{
	t_stk *tmp;
	t_stk *todel;

	tmp = *stk;
	while (tmp)
	{
		todel = tmp;
		tmp = tmp->next;
		todel->next = 0;
		todel->nb = 0;
		free(todel);
	}
	*stk = 0;
}

void		ft_clean(t_stack *stack)
{
	ft_cleanlist(&(stack->a));
	ft_cleanlist(&(stack->b));
	ft_cleanlist(&(stack->p));
	stack->na = 0;
	stack->nb = 0;
	stack->sorted = 0;
}
