/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:10:51 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/20 16:11:08 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_ismin(t_stk **stk, int n)
{
	t_stk *tmp;

	tmp = *stk;
	while (tmp)
	{
		if (tmp->nb < n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
