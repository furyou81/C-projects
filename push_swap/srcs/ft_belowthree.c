/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_belowthree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:48:28 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:22:32 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_init(t_stack *stack, int *countra, int *i, int *na)
{
	*countra = 0;
	ft_removefirst(&(stack)->p);
	if (!stack->p)
	{
		ft_pushback(&(stack)->p, ft_find_pivot(&(stack)->a,
					stack->na - stack->sorted, stack), stack);
		*i = 0;
		*na = stack->na - stack->sorted;
		return (1);
	}
	return (0);
}

void		ft_belowthree(t_stack *stack)
{
	int		i;
	int		na;
	t_stk	*tmp;
	int		countra;

	tmp = stack->a;
	if (ft_init(stack, &countra, &i, &na))
	{
		while (i++ < na)
		{
			if (tmp->nb < stack->p->nb)
			{
				tmp = tmp->next;
				ft_pb(stack);
			}
			else
			{
				tmp = tmp->next;
				ft_ra(stack);
				countra++;
			}
		}
		while (countra-- > 0)
			ft_rra(stack);
	}
}
