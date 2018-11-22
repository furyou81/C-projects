/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:14:31 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:15:44 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

intmax_t		ft_atoii(const char *str, t_stack *stack)
{
	intmax_t	res;
	int			i;
	int			neg;

	neg = 0;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
		res = res * 10 + (str[i++] - '0');
	if (neg == 1)
		res *= -1;
	if (res > INT_MAX || res < INT_MIN)
		ft_error(stack);
	return (res);
}
