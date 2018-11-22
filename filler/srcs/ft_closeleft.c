/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_closeleft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:34:49 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/22 16:03:36 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_filler.h"

int	ft_closeleft(t_game *game)
{
	t_pos	piecepos;
	int		i;
	int		j;

	piecepos = ft_pieceleftup(game);
	ft_befwh(game, piecepos);
	ft_aftwh(game, piecepos);
	i = 0;
	while (i < game->width - 1)
	{
		j = game->height - 1;
		game->pos.x = i;
		while (j >= 0)
		{
			game->pos.y = j;
			if (ft_canput(game, piecepos) == 1)
			{
				ft_printf("%d %d\n", j - piecepos.y, i - piecepos.x);
				return (0);
			}
			j--;
		}
		i++;
	}
	return (-1);
}
