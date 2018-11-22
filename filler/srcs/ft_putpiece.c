/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 18:05:28 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 14:52:22 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

t_pos			ft_pieceleftup(t_game *game)
{
	int		j;
	int		i;
	t_pos	pos;

	pos.x = -1;
	pos.y = -1;
	j = 0;
	i = 0;
	while (game->piece[0][i])
	{
		j = 0;
		while (game->piece[j])
		{
			if (game->piece[j][i] == '*')
			{
				pos.x = i;
				pos.y = j;
				return (pos);
			}
			j++;
		}
		i++;
	}
	return (pos);
}

t_pos			ft_piecerightdown(t_game *game)
{
	int		j;
	int		i;
	t_pos	pos;

	pos.x = -1;
	pos.y = -1;
	i = game->wp - 1;
	while (i >= 0)
	{
		j = game->hp - 1;
		while (j >= 0)
		{
			if (game->piece[j][i] == '*')
			{
				pos.x = i;
				pos.y = j;
				return (pos);
			}
			j--;
		}
		i--;
	}
	return (pos);
}

static t_pos	ft_getpiecepos(t_game *game)
{
	t_pos	piecepos;

	if (game->direction == RIGHT)
		piecepos = ft_pieceleftup(game);
	else
		piecepos = ft_piecerightdown(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	return (piecepos);
}

int				ft_putpiece(t_game *game)
{
	t_pos	piecepos;
	int		tmp;

	if (game->action == CUT)
	{
		piecepos = ft_getpiecepos(game);
		if (ft_fill(game, piecepos) == -1)
		{
			game->action = CLOSE;
			if (ft_close(game) == 1)
				return (ft_strangle(game));
		}
	}
	else if (game->action == CLOSE || ft_isclosed(game) != 1)
	{
		tmp = ft_close(game);
		if (tmp == 1 || tmp == -1)
			return (ft_strangle(game));
	}
	else if (game->action == STRANGLE)
		return (ft_strangle(game));
	return (0);
}
