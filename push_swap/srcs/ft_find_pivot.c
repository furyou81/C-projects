/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pivot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:39:14 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/01 18:06:08 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_pivot(t_stk **sorted, int size)
{
	int		pivot;
	t_stk	*tmp;
	int		i;

	tmp = *sorted;
	i = 1;
	while (tmp)
	{
		if (i == size / 2 + size % 2)
			pivot = tmp->nb;
		tmp = tmp->next;
		i++;
	}
	ft_cleanlist(sorted);
	return (pivot);
}

int			ft_find_pivot(t_stk **stk, int size, t_stack *stack)
{
	t_stk	*tmp;
	t_stk	*sorted;
	int		i;

	i = 0;
	tmp = *stk;
	if (tmp)
	{
		sorted = ft_lstnew(tmp->nb);
		tmp = tmp->next;
	}
	while (tmp && ++i < size)
	{
		ft_insert(&sorted, tmp->nb, stack);
		tmp = tmp->next;
	}
	return (ft_pivot(&sorted, size));
}
