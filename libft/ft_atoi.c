/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:42:37 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/15 17:21:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	ft_valid(const char *str)
{
	int i;
	int count;
	int neg;

	neg = 0;
	count = 0;
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
	while (str[i] >= '0' && str[i] <= '9' && count++ >= 0)
		i++;
	count--;
	if (count > 19 && neg == 1)
		return (0);
	if (count > 19 && neg == 0)
		return (-1);
	return (999);
}

int			ft_atoi(const char *str)
{
	int res;
	int i;
	int neg;

	if (ft_valid(str) == -1 || ft_valid(str) == 0)
		return (ft_valid(str));
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
	return (res);
}
