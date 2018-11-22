/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:25:39 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:28:03 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_positive(unsigned int nb)
{
	char	c;

	if (nb == 0)
		ft_putchar('0');
	else
	{
		if (nb >= 10)
			ft_putnbr_positive(nb / 10);
		c = (nb % 10) + '0';
		ft_putchar(c);
	}
}

void			ft_putnbr(int n)
{
	unsigned int nb;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
			ft_putchar('-');
		nb = (n < 0) ? n * -1 : n;
		ft_putnbr_positive(nb);
	}
}
