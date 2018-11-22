/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printparsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:25:19 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/04 15:32:57 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_printparsing(t_anthill *anthill)
{
	t_parsing *tmp;

	tmp = anthill->parsing;
	while (tmp)
	{
		ft_printf(tmp->toprint);
		tmp = tmp->next;
	}
}
