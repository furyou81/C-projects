/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emerabet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:25:39 by emerabet          #+#    #+#             */
/*   Updated: 2017/11/15 17:28:18 by emerabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr_positive(unsigned int nb, int fd)
{
	char	c;

	if (nb == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (nb >= 10)
			ft_putnbr_positive(nb / 10, fd);
		c = (nb % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
		nb = (n < 0) ? n * -1 : n;
		ft_putnbr_positive(nb, fd);
	}
}
