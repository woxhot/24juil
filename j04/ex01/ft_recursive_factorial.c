/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:11:19 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/11 14:48:44 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = 0;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
		i = ft_recursive_factorial(nb - 1);
	return (nb * i);
}
