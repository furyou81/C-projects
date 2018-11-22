/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleanbuf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 12:55:04 by lfujimot          #+#    #+#             */
/*   Updated: 2018/01/23 16:43:42 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_checker.h"

static void	ft_mrrr(char ***tab, int i, int j, int *p)
{
	tab[0][j][2] = 'r';
	*p = -1;
	tab[0][i][0] = 'r';
	tab[0][i][1] = 'r';
	tab[0][i][2] = 'r';
}

static void	ft_m(int i, char ***tab, int **t)
{
	int	p;
	int	j;

	p = 1;
	if (ft_strcmp(tab[0][i], "rrb") == 0)
	{
		j = i - 1;
		while (ft_strcmp(tab[0][j--], "rrr") == 0 && p == 1)
			if (ft_strcmp(tab[0][j], "rra") == 0)
			{
				ft_mrrr(tab, i, j, &p);
				t[0][i] = -1;
			}
	}
	else if (ft_strcmp(tab[0][i], "rra") == 0 && i > 1)
	{
		j = i - 1;
		while (ft_strcmp(tab[0][j], "rrr") == 0 && p == 1 && j-- > 1)
			if (ft_strcmp(tab[0][j], "rrb") == 0)
			{
				ft_mrrr(tab, i, j, &p);
				t[0][i] = -1;
			}
	}
}

static void	ft_init(t_stack *stack, int *i)
{
	*i = -1;
	stack->pos = 0;
}

void		ft_cleanbuf(t_stack *stack)
{
	char	**tab;
	int		i;
	int		*t;
	int		x;

	i = 0;
	t = (int *)malloc(sizeof(*t) * 208000);
	tab = ft_strsplit(stack->buf, '\n');
	while (tab[i])
		ft_m(i++, &tab, &t);
	ft_init(stack, &i);
	while (tab[++i])
	{
		x = 0;
		if (t[i] != -1)
		{
			while (tab[i][x])
				stack->buf[stack->pos++] = tab[i][x++];
			stack->buf[stack->pos++] = '\n';
		}
		free(tab[i]);
	}
	free(tab);
	free(t);
}
