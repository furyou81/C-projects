/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_step.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:55:13 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:24:08 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_ww(t_stk **stk, int pivot)
{
	t_stk	*tmp;
	int		i;

	i = 0;
	tmp = *stk;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp->nb <= pivot && i > 1)
		return (1);
	return (0);
}

static void	ft_init(int *pivot, int *middle, t_stack *stack)
{
	*pivot = ft_find_pivot(&(stack->a), stack->na, stack);
	*middle = stack->na / 2;
}

void		ft_first_step(t_stack *stack)
{
	int		pivot;
	t_stk	*tmp;
	int		middle;

	ft_init(&pivot, &middle, stack);
	ft_pushback(&(stack)->p, pivot, stack);
	tmp = stack->a;
	while (tmp && stack->na > middle)
	{
		if (ft_ww(&(stack)->a, pivot))
		{
			ft_rra(stack);
			ft_pb(stack);
		}
		else if ((tmp->nb <= pivot && stack->na > 2) || tmp->nb < pivot)
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
}
