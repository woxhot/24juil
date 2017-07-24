/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:02:38 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/10 10:03:35 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dsize;

	i = 0;
	dsize = 0;
	while (dest[dsize])
		dsize++;
	while (src[i])
	{
		if (dsize < size - 1)
			dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize - 1] = '\0';
	return (dsize);
}
