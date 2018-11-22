/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewant.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 16:07:21 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/30 16:56:55 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

t_ant	*ft_lstnewant(int nb, t_room *pos)
{
	t_ant *ant;

	ant = (t_ant *)malloc(sizeof(*ant));
	if (ant == 0)
	{
		free(ant);
		ant = 0;
		return (0);
	}
	else
	{
		ant->nb = nb;
		ant->pos = pos;
		ant->next = 0;
	}
	return (ant);
}
