/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:55:45 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/19 20:48:20 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_STOCK_PAR_H
# define _FT_STOCK_PAR_H
# include <stdlib.h>

typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

char			**ft_split_whitespaces(char *str);

#endif
