/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:11:45 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 11:13:28 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (!(*str >= 'A' && *str <= 'Z'))
			a = 0;
		str++;
	}
	return (a);
}
