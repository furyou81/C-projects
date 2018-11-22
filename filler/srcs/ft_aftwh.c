/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aftwh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:22:24 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 17:28:38 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

static void	ft_init(t_game *game, t_pos piecepos, int *i)
{
	game->aftw = 0;
	*i = piecepos.x;
	game->afth = 0;
}

void		ft_aftwh(t_game *game, t_pos piecepos)
{
	int	i;
	int	j;

	ft_init(game, piecepos, &i);
	while (++i < game->wp)
	{
		j = -1;
		game->count = 0;
		while (++j < game->hp)
			if (game->piece[j][i] == '*')
				game->count++;
		if (game->count > 0)
			game->aftw++;
	}
	j = piecepos.y;
	while (++j < game->hp)
	{
		i = -1;
		game->count = 0;
		while (++i < game->wp)
			if (game->piece[j][i] == '*')
				game->count++;
		if (game->count > 0)
			game->afth++;
	}
}
