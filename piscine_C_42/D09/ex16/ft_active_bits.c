/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:38:53 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 11:12:07 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	checknegative(int value, int *negative);

unsigned int	ft_active_bits(int value)
{
	unsigned int	active;
	unsigned int	temp;
	int				negative;

	active = 0;
	if (value == 0)
		return (0);
	temp = checknegative(value, &negative);
	while (temp > 0)
	{
		if (temp % 2 == 1)
			active++;
		temp = temp / 2;
	}
	if (negative == 1)
		active = 32 - active;
	return (active);
}

unsigned int	checknegative(int value, int *negative)
{
	unsigned int	temp;

	if (value < 0)
	{
		if (value == -2147483648)
			temp = 2147483648;
		else
			temp = -value;
		*negative = 1;
	}
	if (value > 0)
		temp = value;
	return (temp);
}
