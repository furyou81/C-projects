/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 13:19:16 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 14:53:25 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

int			ft_fill(t_game *game, t_pos piecepos)
{
	t_pos	pos;

	if (ft_canput(game, piecepos) == 1)
	{
		if (game->direction == RIGHT)
		{
			pos.x = game->pos.x - piecepos.x;
			pos.y = game->pos.y - piecepos.y;
		}
		else if (game->direction == LEFT)
		{
			pos.x = game->pos.x - piecepos.x;
			pos.y = game->pos.y - piecepos.y;
		}
		ft_printf("%d %d\n", pos.y, pos.x);
	}
	else
		return (-1);
	return (1);
}
