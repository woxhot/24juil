/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:00:07 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/18 10:04:13 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		range = (void *)0;
		return (0);
	}
	else if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	else
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	*range = tab;
	return (i);
}
