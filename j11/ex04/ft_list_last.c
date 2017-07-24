/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 23:39:53 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/23 23:50:11 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list				*ft_list_last(t_list *begin_list)
{
	t_list			*tmp;

	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
