/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:34:34 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/15 17:42:11 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_sortthree(t_stack *stack)
{
	t_stk *tmp;

	tmp = stack->a;
	if (tmp->nb < tmp->next->nb && tmp->next->nb < tmp->next->next->nb)
		return ;
	else if (tmp->nb < tmp->next->next->nb &&
			tmp->next->next->nb < tmp->next->nb)
	{
		ft_rra(stack);
		ft_sa(stack);
	}
	else if (tmp->nb > tmp->next->nb && tmp->next->next->nb > tmp->nb)
		ft_sa(stack);
	else if (tmp->next->next->nb < tmp->nb && tmp->nb < tmp->next->nb)
		ft_rra(stack);
	else if (tmp->next->nb < tmp->next->next->nb &&
			tmp->next->next->nb < tmp->nb)
		ft_ra(stack);
	else if (tmp->nb > tmp->next->nb && tmp->next->nb > tmp->next->next->nb)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	stack->sorted += 3;
}
