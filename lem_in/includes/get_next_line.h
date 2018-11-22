/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:35:03 by emerabet          #+#    #+#             */
/*   Updated: 2018/02/13 14:01:46 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1
# include "../libft/libft.h"

typedef	struct		s_file
{
	int				fd;
	char			*b;
	struct s_file	*next;
}					t_file;

int					get_next_line(const int fd, char **line);
#endif
