/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 06:25:18 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/06 19:47:32 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_declaration(int *a)
{
	a[0] = 48;
	a[1] = 48;
	a[2] = 48;
}

void	ft_perso(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	int	numb[3];

	my_declaration(numb);
	while (numb[0] <= 57)
	{
		if ((numb[0] < numb[1]) && (numb[1] < numb[2]))
		{
			ft_perso(numb[0], numb[1], numb[2]);
			if (numb[0] != 55)
				ft_putchar(',');
			if (numb[0] != 55)
				ft_putchar(' ');
		}
		if (numb[2]++ >= 57)
		{
			numb[2] = 48;
			numb[1]++;
		}
		if (numb[1] == 58)
		{
			numb[1] = 48;
			numb[0]++;
		}
	}
}
