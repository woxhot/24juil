/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:25:56 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/21 12:50:04 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*res;
	int		i;

	i = 0;
	if (!(res = (int *)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
