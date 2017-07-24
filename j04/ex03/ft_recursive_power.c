/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 08:02:14 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/08 08:05:22 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int expo)
{
	if (expo < 0)
		return (0);
	else if (expo == 0)
		return (1);
	else if (expo == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, expo - 1));
}
