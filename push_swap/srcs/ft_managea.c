/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_managea.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:49:00 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:23:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_init(t_stack *stack, int *middle, t_stk **tmp)
{
	*middle = (stack->na - stack->sorted) / 2;
	*tmp = stack->a;
}

static void	ft_initt(t_stack *stack, int *countra, int *remain, int *pivot)
{
	*countra = 0;
	*remain = stack->na - stack->sorted;
	*pivot = ft_find_pivot(&(stack->a), *remain, stack);
}

static void	ft_replace(int countra, t_stack *stack)
{
	while (countra-- > 0)
		ft_rra(stack);
}

static int	ft_countra_plus(t_stack *stack, int countra)
{
	int ret;

	ret = countra;
	ret += 1;
	ft_ra(stack);
	return (ret);
}

void		ft_managea(t_stack *stack)
{
	t_stk	*tmp;
	int		mcr[4];

	ft_init(stack, &mcr[0], &tmp);
	ft_initt(stack, &mcr[1], &mcr[2], &mcr[3]);
	while (tmp && stack->na - stack->sorted - 1 > mcr[0])
		if (stack->na - stack->sorted == 3)
		{
			if (tmp->nb < mcr[3])
				ft_pb(stack);
			return ;
		}
		else if ((tmp->nb < mcr[3] && mcr[2] > 3))
		{
			if (tmp->nb == mcr[3] && mcr[2] > 2)
				mcr[1] = ft_countra_plus(stack, mcr[1]);
			tmp = tmp->next;
			ft_pb(stack);
		}
		else
		{
			tmp = tmp->next;
			mcr[1] = ft_countra_plus(stack, mcr[1]);
		}
	ft_replace(mcr[1], stack);
}
