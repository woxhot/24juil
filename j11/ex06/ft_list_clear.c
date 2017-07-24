/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 02:00:35 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/24 03:59:07 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*t;

	if (begin_list == NULL)
		return ;
	while (t != NULL)
	{
		t = *begin_list;
		*begin_list = (*begin_list)->next;
		free(t);
	}
}
