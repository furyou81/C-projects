/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:34:40 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/14 21:32:31 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	display(int argc, char **argv);

int		main(int argc, char **argv)
{
	int		i;
	char	*tampon;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tampon = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tampon;
			i = 1;
		}
		else
			i++;
	}
	display(argc, argv);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int size1;
	int size2;

	size1 = 0;
	size2 = 0;
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (size1 == 0 && size2 > 0)
		return (-s2[0]);
	if (size2 == 0 && size1 > 0)
		return (s1[0]);
	size1 = 0;
	while (s1[size1])
	{
		if (s1[size1] < s2[size1] || s1[size1] > s2[size1])
			return (s1[size1] - s2[size1]);
		size1++;
	}
	if (size1 < size2)
		return (-s2[size1]);
	return (0);
}

void	display(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
