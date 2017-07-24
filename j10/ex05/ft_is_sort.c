/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 02:41:05 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/22 21:45:19 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int order;

	if (length == 0)
		return (0);
	else if (length == 1)
		return (1);
	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		order = 1;
	else
		order = -1;
	i++;
	while (tab[i] != 0 && i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 && order == -1)
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && order == 1)
			return (0);
		else
			i++;
	}
	return (1);
}
