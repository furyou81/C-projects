/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:35:28 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/10 22:14:02 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rotate(char c);

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}

char	rotate(char c)
{
	int i;

	i = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		while (i < 42)
		{
			if (c == 'z')
				c = 'a';
			else if (c == 'Z')
				c = 'A';
			else
				c++;
			i++;
		}
	}
	return (c);
}
