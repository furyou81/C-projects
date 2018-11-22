/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:25:47 by wael-bou          #+#    #+#             */
/*   Updated: 2018/07/09 20:25:49 by wael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_headers.h"

static t_tris	*ft_lst_new(char c, int coord[4])
{
	t_tris	*lst;
	char	*value;

	if ((lst = (t_tris *)malloc(sizeof(t_tris))) == NULL)
		return (NULL);
	if ((value = (char *)malloc(sizeof(char) * 20)) == NULL)
		return (NULL);
	lst->letter = c;
	lst->coord[0] = coord[0];
	lst->coord[1] = coord[1];
	lst->coord[2] = coord[2];
	lst->coord[3] = coord[3];
	lst->next = NULL;
	return (lst);
}

static int		*ft_get_coord(char *str)
{
	int	i;
	int	tmp;
	int	idx;
	int	*coord;

	coord = (int *)malloc(sizeof(*coord) * 4);
	if (coord == NULL)
		return (NULL);
	i = 0;
	idx = 0;
	tmp = -1;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (tmp == -1)
				tmp = i;
			coord[idx] = i - tmp;
			idx++;
		}
		i++;
	}
	return (coord);
}

void			ft_lst_add(t_tris **start, char *str)
{
	t_tris	*new;
	char	c;
	int		*coord;

	c = 'A';
	coord = ft_get_coord(str);
	new = *start;
	if (new)
	{
		c = c + 1;
		while (new->next)
		{
			new = new->next;
			c = c + 1;
		}
		new->next = ft_lst_new(c, coord);
	}
	else
		*start = ft_lst_new(c, coord);
}
