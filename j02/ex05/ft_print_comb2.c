/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 06:32:26 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/06 16:38:58 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	my_declaration(int *a)
{
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
}

void	ft_perso(int *table)
{
	ft_putchar(table[0] + 48);
	ft_putchar(table[1] + 48);
	ft_putchar(' ');
	ft_putchar(table[2] + 48);
	ft_putchar(table[3] + 48);
}

void	ft_print_comb2(void)
{
	int table[4];

	my_declaration(table);
	while (!((table[0] == 9) && (table[1] == 9)))
	{
		ft_PERSO(table);
		if (!((table[0] == 9) && (table[1] == 8)))
			ft_putchar(',');
		if (!((table[0] == 9) && (table[1] == 8)))
			ft_putchar(' ');
		table[3]++;
		if ((table[3] = table[3] % 10) == 0)
			table[2] = (table[2] + 1);
		if (table[2] == 10)
		{
			table[2] = table[0];
			table[1]++;
			if ((table[1] = table[1] % 10) == 0)
				table[0]++;
			table[3] = table[1] + 1;
		}
	}
}
