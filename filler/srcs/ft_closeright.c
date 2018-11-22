/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closeright.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:45:50 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 16:05:30 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

int	ft_closeright(t_game *game)
{
	t_pos	piecepos;
	int		i;
	int		j;

	piecepos = ft_pieceleftup(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	j = game->height - 1;
	while (j >= 0)
	{
		i = game->width - 1;
		game->pos.y = j;
		while (i >= 0)
		{
			game->pos.x = i;
			if (ft_canput(game, piecepos) == 1)
			{
				ft_printf("%d %d\n", j - piecepos.y, i - piecepos.x);
				return (0);
			}
			i--;
		}
		j--;
	}
	return (-1);
}
