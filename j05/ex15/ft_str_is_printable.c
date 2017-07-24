/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:50:25 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/10 09:50:56 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
