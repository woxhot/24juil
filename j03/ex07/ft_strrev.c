/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:50:46 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/07 00:52:02 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		counter;
	int		size_str;
	char	temp;

	counter = 0;
	size_str = 0;
	while (str[size_str])
		size_str++;
	size_str -= 1;
	while (counter < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[counter];
		str[counter] = temp;
		counter++;
		size_str--;
	}
	return (str);
}
