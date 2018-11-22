/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:08:42 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 15:16:50 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

void	ft_check_valid(char *str, t_stack *stack)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!(str[i]))
		ft_error(stack);
	while (str[i])
		if (ft_isdigit(str[i++]) == 0)
			ft_error(stack);
}
