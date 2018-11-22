/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:56:18 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/27 14:34:05 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>

char			*ft_strjoin_sp(char *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = (char *)ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	return (new);
}

static t_line	*ft_getfd(t_line **lst, const int fd)
{
	t_line *tmp;
	t_line *new;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	new = (t_line *)malloc(sizeof(*new));
	new->fd = fd;
	new->file = (char *)malloc(sizeof(char) * 1);
	new->file[0] = '\0';
	if (*lst == NULL)
		new->next = NULL;
	else
		new->next = *lst;
	*lst = new;
	return (new);
}

static char		*ft_get_line(t_line *file)
{
	int		i;
	char	*tmp;
	char	*str;

	str = file->file;
	i = 0;
	while (file->file[i] && file->file[i] != '\n')
		i++;
	tmp = ft_strsub(file->file, 0, i);
	file->file = ft_strsub(str, i + 1, ft_strlen(file->file));
	free(str);
	str = NULL;
	return (tmp);
}

static int		ft_remove(t_line **lst, t_line *cur, char **line)
{
	t_line *tmp;
	t_line *tmp2;

	tmp = *lst;
	tmp2 = tmp->next;
	ft_strclr(*line);
	if (cur == *lst)
	{
		*lst = cur->next;
		free(cur->file);
		free(cur);
	}
	else
		while (tmp2)
		{
			if (tmp2 == cur)
			{
				tmp->next = tmp2->next;
				free(tmp2->file);
				free(tmp2);
			}
			tmp = tmp2;
			tmp2 = tmp2->next;
		}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_line	*lst;
	t_line			*current;
	char			buf[BUFF_SIZE + 1];
	int				r;

	if (fd < 0 || (current = ft_getfd(&lst, fd)) == NULL)
		return (-1);
	while (ft_strchr(current->file, '\n') == NULL)
	{
		r = read(fd, buf, BUFF_SIZE);
		if (r < 0)
			return (-1);
		buf[r] = '\0';
		current->file = ft_strjoin_sp(current->file, buf);
		if (r == 0 && current->file[0] == '\0')
			return (ft_remove(&lst, current, line));
		if (r == 0)
			break ;
	}
	*line = ft_get_line(current);
	return (1);
}
