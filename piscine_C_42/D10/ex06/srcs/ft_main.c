/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:22:02 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/23 11:31:49 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int		charset(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (-1);
}

int		size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	checkop(char c, int a, int b)
{
	int	(*math[5])(int, int);

	math[0] = &plus;
	math[1] = &moins;
	math[2] = &div;
	math[3] = &mod;
	math[4] = &mult;
	if (c == '+')
		ft_pnbr(math[0](a, b));
	else if (c == '-')
		ft_pnbr(math[1](a, b));
	else if (c == '/')
		(b == 0) ? ft_pstr("Stop : division by zero") : ft_pnbr(math[2](a, b));
	else if (c == '%')
		(b == 0) ? ft_pstr("Stop : modulo by zero") : ft_pnbr(math[3](a, b));
	else if (c == '*')
		ft_pnbr(math[4](a, b));
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int a;
	int b;

	i = 0;
	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		while (argv[2][i])
			i++;
		if (charset(argv[2][0]) == 1 && size(argv[2]) == 1)
		{
			checkop(argv[2][0], a, b);
		}
		else
		{
			ft_putchar('0');
			ft_putchar('\n');
		}
	}
	return (0);
}
