/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 11:23:08 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/15 11:13:42 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int next;

	next = nb;
	while (ft_is_prime(next) == 0)
		next++;
	return (next);
}

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (i * (nb / i) == nb)
			return (0);
		i++;
	}
	return (1);
}
