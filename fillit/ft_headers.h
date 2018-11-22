/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_headers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:55:30 by lfujimot          #+#    #+#             */
/*   Updated: 2018/07/09 20:24:32 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADERS_H
# define FT_HEADERS_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

typedef struct		s_tris
{
	char			letter;
	int				coord[4];
	struct s_tris	*next;
}					t_tris;

typedef struct		s_context
{
	char			*grille;
	int				size;
	int				maxpiece;
}					t_context;
void				ft_error(void);
void				ft_usage(void);
void				ft_putstr(char *str);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_read_input(int fd);
int					ft_check_valid(t_context *ctx, char *input, t_tris **lst);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_check_piece(char *s, int pos, int const end);
void				ft_lst_add(t_tris **start, char *str);
void				ft_memcpy(void *str, const void *src, size_t size);
void				ft_init_grille(char *grille, int size);
char				*ft_strnew(size_t size);
void				ft_print_l(t_tris **lst);
int					ft_solve(t_context *ctx, t_tris *piece,
					int pos);
void				ft_lst_del_all(t_tris **lst);
#endif
