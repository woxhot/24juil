/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 13:17:00 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/17 10:52:39 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;

	i = 0;
	while (*str) // tant que chaine de string
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++; // recherche de mot
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
		{
			i++; // compteur mot
			while (*str && *str != '\t' && *str != ' ' && *str != '\n')
				str++;  //jusqu'a fin du mot
		}
	}
	return (i); // nbs total de mot
}
char	*ft_strdup(char *str)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != '\t' && str[len] != ' ' && str[len] != '\n')
		len++; // taille du mot 
	if (!(word = (char *)malloc((sizeof(char *) * (len + 1/* \0 */))))) //malloc
		return (NULL); 
	i = -1;
	while (++i < len) //copy
		word[i] = str[i];
	word[i] = 0;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;//nbs words
	int		j;//ref du mot

	i = ft_count_words(str);
	if (!(res = (char **)malloc(sizeof(char *) * (i + 1))))//*tableau de tableau *
		return (NULL);
	j = -1;
	while (*str)
	{
		while (*str && (*str == '\t' || *str == ' ' || *str == '\n'))
			str++;//recherche mot
		if (*str && *str != '\t' && *str != ' ' && *str != '\n')
			res[++j] = ft_strdup(str);// recup du mot no*J
		while (*str && *str != '\t' && *str != ' ' && *str != '\n')
			str++;//attente fin du mot
	}
	res[i] = 0;//fin de tableau I
	return (res);
}
