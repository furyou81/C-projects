/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:07:58 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/14 16:00:55 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

static void	ft_init(t_anthill *anthill)
{
	anthill->nbstart = 0;
	anthill->nbtransit = 0;
	anthill->hasstart = 0;
	anthill->hasend = 0;
	anthill->nbtubes = 0;
	anthill->rooms = 0;
	anthill->start = 0;
	anthill->end = 0;
	anthill->ants = 0;
	anthill->turn = 0;
	anthill->parsing = 0;
	anthill->trash = 0;
}

static void	ft_initend(t_tube **end, t_anthill *anthill)
{
	*end = 0;
	ft_pushbacktube(end, anthill->end);
	if (!ft_nextmove(end, anthill->start->name, anthill))
		ft_error(anthill);
	ft_printparsing(anthill);
	ft_printf("\n");
	ft_reset(&(anthill)->rooms);
}

static void	ft_parse(t_anthill *anthill)
{
	char	*tt;

	tt = 0;
	if (ft_parse_lemin(anthill, &tt) == -1)
	{
		if (tt)
			free(tt);
		ft_error(anthill);
	}
	if (tt)
		free(tt);
}

int			main(int argc, char **argv)
{
	t_anthill	anthill;
	t_tube		*end;

	(void)argv;
	if (argc == 1)
	{
		ft_init(&anthill);
		ft_parse(&anthill);
		if (anthill.hasstart + anthill.hasend != 2)
			ft_error(&anthill);
		ft_initstartend(&anthill);
		ft_addants(&anthill);
		ft_initend(&end, &anthill);
		ft_pushbacktrash(&(anthill).trash, end);
		ft_process(&anthill, &end);
		ft_cleananthill(&anthill);
	}
	else
		ft_printf("use < to read file\n");
	return (0);
}
