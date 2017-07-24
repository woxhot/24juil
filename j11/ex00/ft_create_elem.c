/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:00:35 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/23 18:12:11 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(elem));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
