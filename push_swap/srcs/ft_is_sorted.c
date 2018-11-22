/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 16:04:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/11 16:06:35 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_is_sorted(t_stk **stk)
{
	t_stk *tmp;

	tmp = *stk;
	if (tmp)
		while (tmp->next)
		{
			if (tmp->nb > tmp->next->nb)
				return (0);
			tmp = tmp->next;
		}
	return (1);
}
