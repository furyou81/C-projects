/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:57:56 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 09:04:15 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tampon;
	int tampon2;

	tampon = *******c;
	*******c = ***a;
	tampon2 = ****d;
	****d = tampon;
	tampon = *b;
	*b = tampon2;
	***a = tampon;
}