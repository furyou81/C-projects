/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 18:37:59 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/07 18:39:24 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

int	ft_getlast(t_stk **stk)
{
	t_stk *tmp;

	tmp = *stk;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->nb);
}
