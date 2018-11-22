/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 13:05:24 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/26 15:10:34 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLER_H
# define FT_FILLER_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "get_next_line.h"
# include "../libft/libft.h"
# include "../printf/includes/ft_printf.h"

typedef enum		e_action
{
	CUT,
	CLOSE,
	STRANGLE,
	FILL
}					t_action;

typedef enum		e_direction
{
	DEFAULT,
	LEFT,
	RIGHT,
	UP,
	DOWN
}					t_direction;

typedef struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef struct		s_game
{
	char			player;
	char			opp;
	char			**map;
	char			**piece;
	t_direction		direction;
	int				wp;
	int				hp;
	int				w;
	int				h;
	int				befw;
	int				befh;
	int				aftw;
	int				afth;
	t_pos			pos;
	int				width;
	int				height;
	int				nnb;
	int				init;
	int				reverse;
	int				count;
	t_action		action;
}					t_game;

char				*ft_read_input(int fd);
void				ft_parsemap(t_game *game);
t_pos				ft_findpos(t_game *game);
void				ft_cleanmap(char **map);
int					ft_putpiece(t_game *game);
int					ft_fill(t_game *game, t_pos piecepos);
int					ft_close(t_game *game);
t_pos				ft_findinheight(t_game *game, char c);
t_pos				ft_findinheightrev(t_game *game, char c);
t_pos				ft_pieceleftup(t_game *game);
t_pos				ft_piecerightdown(t_game *game);
int					ft_canput(t_game *game, t_pos piecepos);
int					ft_closeleft(t_game *game);
int					ft_closeright(t_game *game);
int					ft_strangle(t_game *game);
void				ft_befwh(t_game *game, t_pos piecepos);
void				ft_aftwh(t_game *game, t_pos piecepos);
int					ft_isclosed(t_game *game);
void				ft_freetab(char **tab);
void				ft_wh(t_game *game);
void				ft_fillmap(t_game *game, char *line, int i);
#endif
