/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_befwh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:04:12 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 17:23:40 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static void	ft_init(t_game *game, t_pos piecepos, int *i)
{
	game->befw = 0;
	*i = piecepos.x;
	game->befh = 0;
}

void		ft_befwh(t_game *game, t_pos piecepos)
{
	int	i;
	int	j;

	ft_init(game, piecepos, &i);
	while (--i >= 0)
	{
		j = -1;
		game->count = 0;
		while (++j < game->hp)
			if (game->piece[j][i] == '*')
				game->count++;
		if (game->count > 0)
			game->befw++;
	}
	j = piecepos.y;
	while (--j >= 0)
	{
		i = -1;
		game->count = 0;
		while (++i < game->wp)
			if (game->piece[j][i] == '*')
				game->count++;
		if (game->count > 0)
			game->befh++;
	}
}
