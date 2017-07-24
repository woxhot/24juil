/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 04:31:52 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/15 04:52:05 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*str;

	size = 0;
	while (src[size] != '\0')
		size++;
	str = (char*)malloc(sizeof(*src) * size);
	while (size >= 0)
	{
		str[size] = src[size];
		size--;
	}
	return (str);
}
