/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findpos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:46:30 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 14:51:02 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

t_pos			ft_findinheight(t_game *game, char c)
{
	t_pos	pos;
	int		i;
	int		j;

	i = 0;
	while (i < game->width)
	{
		j = 0;
		while (j < game->height)
		{
			if (game->map[j][i] == c || game->map[j][i] == c + 32)
			{
				pos.x = i;
				pos.y = j;
			}
			j++;
		}
		i++;
	}
	return (pos);
}

t_pos			ft_findinheightrev(t_game *game, char c)
{
	t_pos	pos;
	int		i;
	int		j;

	i = game->width - 1;
	while (i > 0)
	{
		j = game->height - 1;
		while (j >= 0)
		{
			if (game->map[j][i] == c || game->map[j][i] == c + 32)
			{
				pos.x = i;
				pos.y = j;
			}
			j--;
		}
		i--;
	}
	return (pos);
}

t_pos			ft_findpos(t_game *game)
{
	t_pos	posplayer;
	t_pos	posopp;
	int		first;

	first = 0;
	posplayer = ft_findinheight(game, game->player);
	posopp = ft_findinheight(game, game->opp);
	if (game->direction == DEFAULT)
	{
		if (posplayer.x > posopp.x)
			game->direction = LEFT;
		else
			game->direction = RIGHT;
	}
	if (game->direction == RIGHT)
		posplayer = ft_findinheight(game, game->player);
	else if (game->direction == LEFT)
		posplayer = ft_findinheightrev(game, game->player);
	game->pos = posplayer;
	return (posplayer);
}
