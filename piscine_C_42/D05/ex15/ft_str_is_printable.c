/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:21:07 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 12:12:09 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (!(*str >= 32 && *str <= 126))
			a = 0;
		str++;
	}
	return (a);
}
