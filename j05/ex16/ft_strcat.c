/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:52:27 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/10 09:54:33 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dsize;

	i = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (src[i])
	{
		dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize] = '\0';
	return (dest);
}
