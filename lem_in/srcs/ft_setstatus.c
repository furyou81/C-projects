/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setstatus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 19:48:15 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 15:29:44 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static void	ft_setcounter(t_anthill *anthill)
{
	anthill->nbstart--;
	anthill->nbtransit++;
}

static void	ft_printpath(t_anthill *anthill, t_ant *ant)
{
	if (anthill->turn > 0)
		ft_printf(" ");
	ft_printf("L%d-%s", ant->nb, ant->pos->name);
	anthill->turn++;
}

void		ft_setstatus(t_anthill *anthill, t_room *tooccupy, t_ant *ant)
{
	if (tooccupy == NULL)
	{
		ft_reset(&(anthill)->rooms);
		return ;
	}
	if (tooccupy->status == FREE)
	{
		if (ant->pos->status != START && ant->pos->status != END)
			ant->pos->status = FREE;
		if (ant->pos->status == START)
			ft_setcounter(anthill);
		tooccupy->status = OCCUPIED;
		ant->pos = tooccupy;
		ft_printpath(anthill, ant);
	}
	else if (tooccupy->status == END)
	{
		if (ant->pos->status != START && ant->pos->status != END)
			ant->pos->status = FREE;
		anthill->nbtransit--;
		ant->pos = anthill->end;
		ft_printpath(anthill, ant);
	}
	ft_reset(&(anthill)->rooms);
}
