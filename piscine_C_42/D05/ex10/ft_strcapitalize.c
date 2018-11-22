/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:43:53 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/08 10:26:45 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int afterspace;

	i = 0;
	afterspace = 1;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if (afterspace == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			afterspace = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (afterspace == 1)
				afterspace = 0;
			else
				str[i] = str[i] + 32;
		}
		else
			afterspace = 1;
		i++;
	}
	return (str);
}
