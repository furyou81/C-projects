/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushbacktrash.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 18:02:19 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/05 15:54:14 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

t_trash	*ft_lstnewtrash(t_tube *tube)
{
	t_trash *trash;

	trash = (t_trash *)malloc(sizeof(*trash));
	if (trash == 0)
		return (0);
	else
	{
		trash->tubes = tube;
		trash->next = 0;
	}
	return (trash);
}

void	ft_pushbacktrash(t_trash **trash, t_tube *tube)
{
	t_trash *new;

	if (tube == NULL)
		return ;
	new = *trash;
	if (new)
	{
		while (new->next)
		{
			new = new->next;
		}
		if (new)
			new->next = ft_lstnewtrash(tube);
	}
	else
		*trash = ft_lstnewtrash(tube);
}
