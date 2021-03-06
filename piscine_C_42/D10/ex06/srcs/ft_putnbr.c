/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:36:28 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/17 15:17:44 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_pnbr(int nb)
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
		ft_pnbr(uint / 10);
	ft_putchar((uint % 10) + 48);
}
