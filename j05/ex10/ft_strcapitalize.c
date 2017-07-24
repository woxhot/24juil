/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 03:48:26 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/10 03:51:30 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		is_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	is_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if ((is_min(str[i])) && (word == 0))
			str[i] = str[i] - 32;
		else if ((is_maj(str[i])) && (word == 1))
			str[i] = str[i] + 32;
		if (!(is_letter(str[i])))
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
