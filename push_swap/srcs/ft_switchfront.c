/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switchfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:43:55 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/10 18:51:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_plusmoins(t_stack *stack, char c)
{
	if (c == 'a')
	{
		stack->na++;
		stack->nb--;
	}
	else if (c == 'b')
	{
		stack->na--;
		stack->nb++;
	}
}

void		ft_switchfront(t_stack *stack, char c)
{
	t_stk *new;

	if (c == 'a')
	{
		new = stack->b;
		if (new)
		{
			stack->b = new->next;
			new->next = stack->a;
			stack->a = new;
			ft_plusmoins(stack, 'a');
		}
	}
	else if (c == 'b')
	{
		new = stack->a;
		if (new)
		{
			stack->a = new->next;
			new->next = stack->b;
			stack->b = new;
			ft_plusmoins(stack, 'b');
		}
	}
}
