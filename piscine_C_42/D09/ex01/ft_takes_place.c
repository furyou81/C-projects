/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfujimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:43:05 by lfujimot          #+#    #+#             */
/*   Updated: 2017/08/10 18:23:39 by lfujimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	if (hour > 12)
		h = hour - 12;
	else
		h = hour;
	if (hour >= 0 && hour <= 24)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		if (hour == 12)
			printf("12.00 P.M. AND 1.00 P.M.\n");
		if (hour == 0 || hour == 24)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		if (hour > 0 && hour < 11)
			printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
		if (hour > 12 && hour < 23)
			printf("%d.00 P.M. AND %d.00 P.M.\n", h, h + 1);
	}
}
