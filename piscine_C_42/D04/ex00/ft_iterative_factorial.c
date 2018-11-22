/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 22:02:39 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/07 10:28:14 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int iteration;
	int resultat;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	iteration = 1;
	resultat = 1;
	while (iteration <= nb)
	{
		resultat = resultat * iteration;
		iteration++;
	}
	return (resultat);
}
