/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 06:40:24 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/11 14:56:35 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	d;

	if (nb < 0)
	{
		ft_putchar('-');
		d = -(nb % 10);
		ft_putnbr((nb / 10) * -1);
		ft_putchar(d + '0');
	}
	else if (nb >= 10)
	{
		d = nb % 10;
		ft_putnbr(nb / 10);
		ft_putchar(d + '0');
	}
	else
		ft_putchar(nb + '0');
}
