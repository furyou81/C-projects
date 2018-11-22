/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:44:45 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/08 16:11:02 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_pushfront(t_stk **stk, int nb)
{
	t_stk *new;

	new = ft_lstnew(nb);
	new->next = *stk;
	*stk = new;
}
