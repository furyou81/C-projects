/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:47:58 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/17 14:31:35 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	unsigned int uint;

	uint = 0;
	if (nb == -2147483648)
	{
		uint = 2147483648;
		ft_putchar('-');
	}
	else if (nb < 0)
	{
		uint = -nb;
		ft_putchar('-');
	}
	else
	{
		uint = nb;
	}
	if (uint >= 10)
		ft_putnbr(uint / 10);
	ft_putchar((uint % 10) + 48);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != '\0')
	{
		j = 0;
		while (par[i].str[j])
		{
			ft_putchar(par[i].str[j]);
			j++;
		}
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
