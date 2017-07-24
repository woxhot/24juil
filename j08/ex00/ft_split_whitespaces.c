/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:17:00 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/19 19:27:04 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
		{
			i++;
			while (*str && *str != '\t' && *str != ' ' && *str != '\n')
				str++;
		}
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != '\t' && str[len] != ' ' && str[len] != '\n')
		len++;
	if (!(word = (char *)malloc((sizeof(char *) * (len + 1)))))
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = str[i];
	word[i] = 0;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;

	i = ft_count_words(str);
	if (!(res = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	j = -1;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
			res[++j] = ft_strdup(str);
		while (*str && *str != '\t' && *str != ' ' && *str != '\n')
			str++;
	}
	res[i] = 0;
	return (res);
}
