/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:16:21 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/04 15:13:13 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		counter(char *t);

char	*ft_strrev(char *str)
{
	int		count;
	int		count2;
	char	temp;

	count2 = 0;
	count = counter(str);
	while (count > count2)
	{
		temp = str[count];
		str[count] = str[count2];
		str[count2] = temp;
		count2++;
		count--;
	}
	return (str);
}

int		counter(char *t)
{
	int c;

	c = 0;
	while (t[c])
		c++;
	return (c - 1);
}
