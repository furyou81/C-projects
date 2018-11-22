/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 15:58:22 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:21:00 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static int	ft_addbefore(t_stk **stk, int nb, int pos)
{
	int		i;
	t_stk	*tmp;
	t_stk	*next;

	tmp = *stk;
	i = 1;
	while (tmp)
	{
		if (i == pos)
		{
			next = tmp->next;
			tmp->next = ft_lstnew(nb);
			tmp->next->next = next;
		}
		tmp = tmp->next;
		i++;
	}
	return (1);
}

int			ft_insert(t_stk **stk, int nb, t_stack *stack)
{
	t_stk	*tmp;
	int		pos;

	pos = 0;
	tmp = *stk;
	if (tmp)
	{
		if (tmp->nb > nb)
			ft_pushfront(stk, nb);
		else
		{
			while (tmp)
			{
				if (tmp->nb > nb)
					return (ft_addbefore(stk, nb, pos));
				tmp = tmp->next;
				pos++;
			}
			ft_pushback(stk, nb, stack);
		}
	}
	else
		ft_pushback(stk, nb, stack);
	return (0);
}
