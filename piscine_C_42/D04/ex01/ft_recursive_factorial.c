/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 21:57:40 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/07 10:29:33 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int factoriel;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
		factoriel = nb * ft_recursive_factorial(nb - 1);
	return (factoriel);
}
