/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resetplayerinlive.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 14:49:44 by lfujimot          #+#    #+#             */
/*   Updated: 2018/04/11 10:29:27 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_corewar.h"

void	ft_resetplayerinlive(t_player **p)
{
	t_player	*tmp;

	tmp = *p;
	while (tmp)
	{
		tmp->inlive = 0;
		tmp->nblive = 0;
		tmp = tmp->next;
	}
}
