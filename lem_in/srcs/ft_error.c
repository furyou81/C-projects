/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 18:33:09 by lfujimot          #+#    #+#             */
/*   Updated: 2018/02/14 15:58:03 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lemin.h"

void	ft_error(t_anthill *anthill)
{
	write(2, "ERROR\n", 6);
	ft_cleananthill(anthill);
	exit(EXIT_FAILURE);
}
