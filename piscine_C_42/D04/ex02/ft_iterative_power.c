/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:01:41 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/04 13:05:58 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
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
