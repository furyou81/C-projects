/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:26:32 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 17:08:13 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_print(t_stack *stack)
{
	t_stk *tmp;
	t_stk *ttmp;

	tmp = stack->a;
	ft_printf("Pile A: %d\n", stack->na);
	while (tmp)
	{
		ft_printf(" [%d] ", tmp->nb);
		tmp = tmp->next;
	}
	ttmp = stack->b;
	ft_printf("\nPile B: %d\n", stack->nb);
	while (ttmp && stack->nb > 0)
	{
		ft_printf(" [%d] ", ttmp->nb);
		ttmp = ttmp->next;
	}
	ft_printf("\n\n");
}
