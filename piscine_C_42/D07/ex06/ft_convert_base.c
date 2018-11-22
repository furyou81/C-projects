/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:09:16 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/17 11:03:05 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_iterative_power(int nb, int power);
int		conv10(char *nbr, char *base_from);
char	*from10to(int nbr, char *base_to);
int		count(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (from10to(conv10(nbr, base_from), base_to));
}

int		conv10(char *nbr, char *base_from)
{
	int res;
	int i;
	int j;
	int s;
	int sb;

	res = 0;
	i = 0;
	s = 0;
	sb = 0;
	s = count(nbr);
	sb = count(base_from);
	while (nbr[i] != '\0')
	{
		j = 0;
		while (base_from[j] != '\0')
		{
			if (nbr[i] == base_from[j])
				res = res + j * ft_iterative_power(sb, s - i - 1);
			j++;
		}
		i++;
	}
	return (res);
}

char	*from10to(int nbr, char *base_to)
{
	int		sb;
	char	*reverse;
	char	*r;
	int		i;

	r = malloc(sizeof(*r) * 100);
	reverse = malloc(sizeof(*reverse) * 100);
	sb = 0;
	i = 0;
	sb = count(base_to);
	while (nbr > 0)
	{
		r[i++] = base_to[nbr % sb];
		nbr = nbr / sb;
	}
	r[i] = '\0';
	sb = count(r) - 1;
	i = 0;
	while (sb >= 0)
	{
		reverse[i++] = r[sb];
		sb--;
	}
	reverse[i] = '\0';
	return (reverse);
}

int		ft_iterative_power(int nb, int power)
{
	int res;
	int counter;

	res = 1;
	counter = 0;
	if (power < 0)
		return (0);
	while (counter < power)
	{
		res = res * nb;
		counter++;
	}
	return (res);
}

int		count(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
