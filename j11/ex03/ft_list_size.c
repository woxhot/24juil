/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 23:19:21 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/23 23:43:52 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int					ft_list_size(t_list **begin_list)
{
	int				i;
	t_list			*tmp;

	if (begin_list == NULL)
		return (0);
	i = 0;
	tmp = *begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	i = i + 1;
	return (i);
}
