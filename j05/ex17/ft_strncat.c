/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:55:48 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/10 09:57:43 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	dsize;

	i = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (i < nb && src[i])
	{
		dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize] = '\0';
	return (dest);
}
