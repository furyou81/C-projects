/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 17:07:21 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/01 17:13:09 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_reset(t_room **rooms)
{
	t_room *tmp;

	tmp = *rooms;
	while (tmp)
	{
		tmp->visited = 0;
		tmp = tmp->next;
	}
}
