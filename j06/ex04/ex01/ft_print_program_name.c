/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:53:46 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/17 16:42:25 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	while (*av[0])
		ft_putchar(*av[0]++);
	if (ac > 1)
		return (0);
	ft_putchar('\n');
	return (0);
}
