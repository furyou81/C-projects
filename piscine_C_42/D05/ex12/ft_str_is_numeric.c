/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 10:52:35 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 10:57:52 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int a;
	int count;

	a = 1;
	count = 0;
	while (str[count])
		count++;
	if (count == 0)
		return (1);
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')))
			a = 0;
		str++;
	}
	return (a);
}
