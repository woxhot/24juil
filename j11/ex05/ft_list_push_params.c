/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 00:00:27 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/24 00:31:37 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*elem;
	t_list	*final;

	i = ac;
	while (i != 0)
	{
		elem = ft_create_elem(av[i]);
		if (i == ac)
			final = elem;
		if (i != 1)
			elem->next = tmp;
		tmp = elem;
		i--;
	}
	return (final);
}
