/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:55:45 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/19 13:11:24 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_STOCK_PAR_H
# define _FT_STOCK_PAR_H
# include <stdlib.h>

char			**ft_split_whitespaces(char *str);

typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

#endif
