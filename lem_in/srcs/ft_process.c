/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 15:11:33 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/05 15:40:19 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static void	ft_initprocess(t_anthill *anthill, t_ant **ants)
{
	anthill->turn = 0;
	*ants = anthill->ants;
}

void		ft_process(t_anthill *hill, t_tube **end)
{
	t_room	*r;
	t_ant	*ants;

	while (hill->nbstart + hill->nbtransit > 0)
	{
		ft_initprocess(hill, &ants);
		while ((ants != 0))
			if (ants->pos != hill->start)
			{
				if (ants->pos != hill->end)
					ft_setstatus(hill, ft_nextmove(end,
								ants->pos->name, hill), ants);
				ants = ants->next;
			}
			else
				break ;
		if (ants)
			while (ants && (r = ft_nextmove(end, ants->pos->name, hill)) != 0)
			{
				ft_setstatus(hill, r, ants);
				ants = ants->next;
			}
		ft_printf("\n");
		ft_reset(&(hill)->rooms);
	}
}
