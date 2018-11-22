/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 11:33:11 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:22:16 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_error(t_stack *stack)
{
	write(2, "Error\n", 6);
	stack->error = 1;
	ft_clean(stack);
	ft_cleanbuf(stack);
	exit(EXIT_FAILURE);
}
