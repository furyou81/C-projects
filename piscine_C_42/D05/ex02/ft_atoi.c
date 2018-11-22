/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:52:04 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/07 13:42:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int resu(int g, int c, char *s, int r);

int	ft_atoi(char *str)
{
	int res;
	int count;
	int g;
	int n;

	res = 0;
	count = 0;
	g = 0;
	n = 0;
	while (str[count])
		count++;
	while (str[g] == ' ' || str[g] == '\n' || str[g] == '\t' || str[g] == '+')
		g++;
	if (str[g] == '-')
	{
		n = 1;
		g++;
	}
	if (str[g] < 48 || str[g] > 57)
		return (0);
	res = resu(g, count, str, res);
	if (n == 1)
		return (-res);
	return (res);
}

int	resu(int g, int c, char *s, int r)
{
	while (g < c)
	{
		if (s[g] >= 48 && s[g] <= 57)
			r = r * 10 + s[g] - 48;
		else
			g = c;
		g++;
	}
	return (r);
}
