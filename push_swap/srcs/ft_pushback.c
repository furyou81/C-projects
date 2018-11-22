/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:39:23 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:18:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_pushback(t_stk **stk, int nb, t_stack *stack)
{
	t_stk *new;

	new = *stk;
	if (new)
	{
		if (new->nb == nb)
		{
			ft_cleanlist(stk);
			ft_error(stack);
		}
		while (new->next)
		{
			new = new->next;
			if (new->nb == nb)
			{
				ft_cleanlist(stk);
				ft_error(stack);
			}
		}
		new->next = ft_lstnew(nb);
	}
	else
		*stk = ft_lstnew(nb);
}
