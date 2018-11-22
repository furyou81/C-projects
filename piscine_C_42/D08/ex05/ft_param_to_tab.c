/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:14:51 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/18 12:09:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					sizep(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*copy(char *str)
{
	char	*cp;
	int		i;

	cp = (char *)malloc(sizeof(*cp) * sizep(str));
	i = 0;
	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*t;
	int			i;

	t = (t_stock_par *)malloc(sizeof(*t) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		t[i].size_param = sizep(av[i]);
		t[i].str = av[i];
		t[i].copy = copy(av[i]);
		t[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	t[i].str = 0;
	return (t);
}
