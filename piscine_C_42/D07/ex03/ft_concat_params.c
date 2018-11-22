/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:55:59 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/16 14:19:14 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
		size = size + ft_strlen(argv[i++]);
	str = (char *)malloc(sizeof(*str) * size);
	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[size++] = argv[i][j++];
		if (i < argc - 1)
			str[size++] = '\n';
		i++;
	}
	str[size] = '\0';
	return (str);
}
