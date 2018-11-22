/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 21:56:54 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/22 19:23:11 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int c;

	i = -1;
	c = 0;
	if (length == 0)
		return (1);
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			c++;
	}
	if (c == length - 1)
		return (1);
	else
	{
		i = -1;
		c = 0;
		while (++i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) <= 0)
				c++;
		}
		return (c == length - 1);
	}
}
