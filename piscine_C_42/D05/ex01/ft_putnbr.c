/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:36:28 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/10 11:38:13 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
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
		ft_putnbr(uint / 10);
	ft_putchar((uint % 10) + 48);
}
