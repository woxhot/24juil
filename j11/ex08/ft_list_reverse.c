/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 06:59:32 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/24 07:13:27 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*current;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = *begin_list;
		*begin_list = current;
		current = next;
	}
}
