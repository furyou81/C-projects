/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:38:06 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/01 13:41:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_i(t_stack *stack, char *arg)
{
	if (ft_strcmp(arg, "-c") == 0)
		stack->c = 1;
	else if (ft_strcmp(arg, "-v") == 0)
		stack->v = 1;
	else if (ft_strcmp(arg, "-cv") == 0 || ft_strcmp(arg, "-vc") == 0)
	{
		stack->c = 1;
		stack->v = 1;
	}
	else
		return (1);
	return (2);
}
