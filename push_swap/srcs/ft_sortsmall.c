/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortsmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:02:08 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 12:27:51 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_whereismin(t_stk **stk)
{
	int		count;
	t_stk	*tmp;
	int		min;
	int		pos;

	min = INT_MAX;
	tmp = *stk;
	count = 0;
	while (tmp)
	{
		count++;
		if (tmp->nb <= min)
		{
			min = tmp->nb;
			pos = count;
		}
		tmp = tmp->next;
	}
	return (pos);
}

static void	ft_dosort(t_stack *stack)
{
	int	pos;

	pos = ft_whereismin(&(stack)->b);
	if (pos > stack->nb / 2 + 1)
	{
		while (pos++ < stack->nb + 1)
			ft_rrb(stack);
		ft_pa(stack);
		ft_ra(stack);
		stack->sorted++;
	}
	else
	{
		while (pos-- > 1)
			if (ft_maxt(&(stack)->b, stack->b->nb))
			{
				ft_pa(stack);
				stack->r++;
			}
			else
				ft_rb(stack);
		ft_pa(stack);
		ft_ra(stack);
		stack->sorted++;
	}
}

void		ft_sortsmall(t_stack *stack)
{
	if (stack->nb < 5)
		ft_sortthreef(stack);
	else
	{
		while (stack->nb > 0)
		{
			ft_dosort(stack);
		}
		while (stack->r-- > 0)
		{
			ft_ra(stack);
			stack->sorted++;
		}
	}
}
