/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 20:58:04 by lfujimot          #+#    #+#             */
/*   Updated: 2017/11/07 21:18:46 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**sort_tab(char **tab, int argc)
{
	char	*tampon;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tampon = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tampon;
			i = 1;
		}
		else
			i++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**sorted_tab;

	if (argc > 1)
	{
		sorted_tab = sort_tab(argv, argc);
		i = 1;
		while (i < argc)
		{
			while (*sorted_tab[i])
				ft_putchar(*sorted_tab[i]++);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
