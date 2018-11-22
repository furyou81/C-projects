/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_canput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:19:37 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 17:00:47 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static int	ft_overlinkblock(t_game *game, int i, int j, t_pos m)
{
	if ((i >= game->width || j >= game->height) &&
			game->piece[m.y][m.x] == '*')
		return (-1);
	if (game->piece[m.y][m.x] == '*')
	{
		if (game->map[j][i] == game->player || game->map[j][i]
				== game->player + 32)
		{
			if (game->count > 0)
				return (-1);
			game->count++;
		}
		else if (game->map[j][i] == game->opp ||
				game->map[j][i] == game->opp + 32)
		{
			game->action = STRANGLE;
			return (-1);
		}
	}
	return (0);
}

static void	ft_init(t_game *game, t_pos *p, t_pos piecepos)
{
	game->count = 0;
	p->x = game->pos.x - piecepos.x;
	p->y = game->pos.y - piecepos.y;
}

int			ft_canput(t_game *game, t_pos piecepos)
{
	t_pos	p;
	t_pos	m;

	ft_init(game, &p, piecepos);
	if ((p.y + game->afth >= game->height) || (p.x + game->aftw >= game->width)
		|| (p.x < 0 && game->befw > 0) || (p.y < 0 && game->befh > 0))
		return (-1);
	m.y = 0;
	while (game->piece[m.y])
	{
		m.x = 0;
		p.x = game->pos.x - piecepos.x;
		while (game->piece[m.y][m.x])
		{
			if (ft_overlinkblock(game, p.x, p.y, m) == -1)
				return (-1);
			m.x++;
			p.x++;
		}
		m.y++;
		p.y++;
	}
	if (game->count != 1)
		return (-1);
	return (1);
}
