/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 04:34:44 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/06 19:05:36 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	curs;

	curs = 'a';
	while (curs <= 'z')
	{
		ft_putchar(curs)	;
		curs++	;
	}
}
