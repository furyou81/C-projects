/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printrooms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 20:38:38 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/03 16:23:27 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_printrooms(t_room **rooms)
{
	t_room *tt;

	tt = *rooms;
	while (tt)
	{
		ft_printf("NAME %s STATUS %d VISITED %d\n", tt->name,
				tt->status, tt->visited);
		tt = tt->next;
	}
}
