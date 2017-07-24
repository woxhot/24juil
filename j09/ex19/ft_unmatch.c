/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:13:49 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/14 12:14:11 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int i;
	int j;
	int match_count;

	i = 0;
	j = 0;
	match_count = 0;
	while (i < lenght)
	{
		while (j < lenght)
		{
			if (tab[i] == tab[j])
				match_count++;
			j++;
		}
		if (match_count == 2)
			return (i);
		j = 0;
		match_count = 0;
		i++;
	}
	return (0);
}
