/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 07:41:29 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/14 07:47:00 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

int	ft_compact(char **tab, int length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	length = 0;
	while (tab[i])
	{
		if (tab[i] == 0)
		{
			k = 0;
			while (tab[i + k + 1])
			{
				j = 0;
				while (tab[i + k + 1][j])
				{
					tab[i + k][j] = tab[i + k + 1][j];
					j++;
				}
				k++;
			}
		}
		i++;
	}
	return (size_tab(tab));
}
