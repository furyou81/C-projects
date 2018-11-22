/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstartend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 16:17:11 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/30 16:19:18 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_initstartend(t_anthill *anthill)
{
	t_room *tmp;

	tmp = anthill->rooms;
	while (tmp)
	{
		if (tmp->status == START)
			anthill->start = tmp;
		else if (tmp->status == END)
			anthill->end = tmp;
		tmp = tmp->next;
	}
}
