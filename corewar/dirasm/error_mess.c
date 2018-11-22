/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_mess.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssi-moha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 10:14:12 by ssi-moha          #+#    #+#             */
/*   Updated: 2018/04/27 16:05:30 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_corewar.h"

int		error_mess(char *str)
{
	if (!str)
		ft_putstr_fd("ERROR\n", 2);
	else
		ft_putstr_fd(str, 2);
	return (EXIT_FAILURE);
}
