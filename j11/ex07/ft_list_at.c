/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 02:48:00 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/24 03:28:42 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list **begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*t;

	if (begin_list == NULL)
		return (0);
	i = 0;
	while (i != nbr)
	{
		if (t->next == NULL)
			return (0);
		t = t->next;
		i++;
	}
	return (t);
}
