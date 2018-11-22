/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lemin.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:03:25 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/14 15:09:25 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LEMIN_H
# define FT_LEMIN_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <limits.h>
# include "get_next_line.h"

typedef struct			s_parsing
{
	char				*toprint;
	struct s_parsing	*next;
}						t_parsing;

typedef enum			e_status
{
	FREE,
	OCCUPIED,
	START,
	END,
}						t_status;

typedef struct			s_tube
{
	struct s_room		*trooms;
	struct s_tube		*next;
}						t_tube;

typedef struct			s_pos
{
	int					x;
	int					y;
}						t_pos;

typedef struct			s_room
{
	char				*name;
	t_pos				pos;
	t_status			status;
	int					visited;
	t_tube				*tubes;
	struct s_room		*next;
}						t_room;

typedef struct			s_ant
{
	int					nb;
	t_room				*pos;
	struct s_ant		*next;
}						t_ant;

typedef struct			s_trash
{
	t_tube				*tubes;
	struct s_trash		*next;
}						t_trash;

typedef struct			s_anthill
{
	int					nbstart;
	int					nbtransit;
	int					hasstart;
	int					hasend;
	int					nbtubes;
	int					turn;
	t_ant				*ants;
	t_room				*start;
	t_room				*end;
	t_room				*rooms;
	t_parsing			*parsing;
	t_trash				*trash;
}						t_anthill;

intmax_t				ft_atoii(const char *str, t_anthill *anthill);
int						get_next_line(const int fd, char **line);
int						ft_parse_lemin(t_anthill *anthill, char **tt);
t_tube					*ft_lstnewtube(t_room *room);
void					ft_pushbacktube(t_tube **tube, t_room *room);
t_room					*ft_lstnewroom(char *name, t_pos pos, t_status status);
void					ft_pushbackroom(t_room **room, char *name, t_pos pos,
						t_status status);
t_ant					*ft_lstnewant(int nb, t_room *pos);
void					ft_pushbackant(t_ant **ants, int nb, t_room *pos);
void					ft_error(t_anthill *anthill);
void					ft_cleananthill(t_anthill *anthill);
t_room					*ft_nextmove(t_tube **end, char *name,
						t_anthill *anthill);
void					ft_reset(t_room **rooms);
void					ft_initstartend(t_anthill *anthill);
void					ft_addants(t_anthill *anthill);
void					ft_setstatus(t_anthill *anthill, t_room *tooccupy,
						t_ant *ants);
void					ft_printrooms(t_room **rooms);
int						ft_countchar(char *line, char c);
t_room					*ft_getroom(t_room **rooms, char *name);
void					ft_freetab(char **tab);
int						ft_parsetube(char *line, t_anthill *anthill);
int						ft_parseroom(char *line, t_anthill *anthill,
						t_status status);
int						ft_iscomment(char *line);
t_status				ft_iscmd(char *line);
int						ft_printf(const char *format, ...);
t_parsing				*ft_lstnewparsing(char *p);
void					ft_pushbackparsing(t_parsing **parsing, char *line);
void					ft_pushbacktrash(t_trash **trash, t_tube *tube);
void					ft_printparsing(t_anthill *anthill);
void					ft_cleantube(t_tube **tubes);
void					ft_process(t_anthill *hill, t_tube **end);
#endif
