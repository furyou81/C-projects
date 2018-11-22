/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortfour.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:49:18 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:23:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_where(t_stk **stk, int max)
{
	t_stk	*tmp;
	int		pos;

	pos = 1;
	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb == max)
			return (pos);
		tmp = tmp->next;
		pos++;
	}
	return (0);
}

static void	ft_lastismax(t_stack *stack, int pos)
{
	if (pos == 4)
	{
		ft_rra(stack);
		ft_pb(stack);
	}
}

void		ft_sortfour(t_stack *stack)
{
	t_stk	*tmp;
	int		max;
	int		i;
	int		pos;

	i = 0;
	max = ft_maxk(&(stack)->a);
	tmp = stack->a;
	pos = ft_where(&(stack)->a, max);
	ft_lastismax(stack, pos);
	while (tmp && i++ < 4 && stack->na > 3)
	{
		if (tmp->nb == max)
		{
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			ft_ra(stack);
		}
	}
	ft_sortthree(stack);
	ft_sortthreef(stack);
}
