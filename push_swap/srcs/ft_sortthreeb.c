/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthreeb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:31:27 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/16 14:31:41 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_case_one(t_stack *stack)
{
	ft_pb(stack);
	ft_sa(stack);
	ft_pa(stack);
	ft_sa(stack);
}

static void	ft_case_two(t_stack *stack)
{
	ft_sa(stack);
	ft_pb(stack);
	ft_sa(stack);
	ft_pa(stack);
}

static void	ft_case_three(t_stack *stack)
{
	ft_pb(stack);
	ft_sa(stack);
	ft_pa(stack);
	ft_sa(stack);
}

void		ft_sortthreeb(t_stack *stack)
{
	t_stk *tmp;

	tmp = stack->a;
	if (tmp->nb < tmp->next->nb && tmp->next->nb < tmp->next->next->nb)
		return ;
	else if (tmp->nb < tmp->next->next->nb &&
			tmp->next->next->nb < tmp->next->nb)
	{
		ft_pb(stack);
		ft_sa(stack);
		ft_pa(stack);
	}
	else if (tmp->nb > tmp->next->nb && tmp->next->next->nb > tmp->nb)
		ft_sa(stack);
	else if (tmp->next->next->nb < tmp->nb && tmp->nb < tmp->next->nb)
		ft_case_one(stack);
	else if (tmp->next->nb < tmp->next->next->nb &&
			tmp->next->next->nb < tmp->nb)
		ft_case_two(stack);
	else if (tmp->nb > tmp->next->nb && tmp->next->nb > tmp->next->next->nb)
		ft_case_three(stack);
}
