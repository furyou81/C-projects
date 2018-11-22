/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:00:47 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/11 03:31:11 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
char	*ft_strlowcase(char *str);
int		count(char *c);

void	ft_spy(int argc, char **argv)
{
	int i;
	int test;

	test = 0;
	i = 1;
	while (i < argc)
	{
		if ((ft_strcmp(ft_strlowcase(argv[i]), "attack") == 0 ||
		ft_strcmp(ft_strlowcase(argv[i]), "powers") == 0 ||
		ft_strcmp(ft_strlowcase(argv[i]), "president") == 0) && test == 0)
		{
			write(1, "Alert!!!\n", 9);
			test = 1;
		}
		i++;
	}
}

char	*ft_strlowcase(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[count])
		count++;
	while (i < count)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;
	int x;
	int y;

	y = count(s1);
	size2 = count(s2);
	size1 = 0;
	x = 0;
	while (s1[size1])
	{
		while (s1[size1] == ' ' || s1[size1] == '\t')
			size1++;
		if (((s1[size1] < s2[x] || s1[size1] > s2[x])) &&
			size1 < y && s1[size1] != ' ' && s1[size1] != '\0')
			return (s1[size1] - s2[x]);
		size1++;
		if (x < size2)
			x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	ft_spy(argc, argv);
	return (0);
}

int		count(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
