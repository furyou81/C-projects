/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 15:57:17 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/13 15:54:59 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str[0] != '\0')
	{
		while (to_find[i] != '\0')
		{
			if (to_find[i] != str[i])
				return (ft_strstr(str + 1, to_find));
			i++;
		}
		return (str);
	}
	return (0);
}
