/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsetube.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 15:09:27 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/14 15:53:51 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static int	ft_contains_tube(t_tube **tubes, t_room *room)
{
	t_tube *tmp;

	tmp = *tubes;
	while (tmp)
	{
		if (ft_strcmp(tmp->trooms->name, room->name) == 0)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

int			ft_parsetube(char *line, t_anthill *anthill)
{
	char	**tab;
	t_room	*roomone;
	t_room	*roomtwo;

	tab = ft_strsplit(line, '-');
	roomone = ft_getroom(&(anthill)->rooms, tab[0]);
	roomtwo = ft_getroom(&(anthill)->rooms, tab[1]);
	if (!(roomone && roomtwo))
	{
		ft_freetab(tab);
		return (-1);
	}
	else
	{
		if (!ft_contains_tube(&(roomone)->tubes, roomtwo))
		{
			ft_pushbacktube(&(roomone)->tubes, roomtwo);
			ft_pushbacktube(&(roomtwo)->tubes, roomone);
			anthill->nbtubes++;
		}
	}
	ft_pushbackparsing(&(anthill)->parsing, line);
	ft_pushbackparsing(&(anthill)->parsing, "\n");
	ft_freetab(tab);
	return (1);
}
