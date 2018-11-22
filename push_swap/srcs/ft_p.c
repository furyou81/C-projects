/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:43:02 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 17:03:27 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_p(t_stack *stack, char *tabi)
{
	if (stack->c == 1 && stack->error == 0)
		ft_print_color(tabi);
	if (stack->v == 1 && stack->error == 0)
	{
		if (stack->c == 0)
			ft_printf("%s\n", tabi);
		ft_print(stack);
	}
}
