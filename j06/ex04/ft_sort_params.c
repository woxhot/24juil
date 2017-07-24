/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 20:29:15 by rvieira           #+#    #+#             */
/*   Updated: 2017/07/16 20:31:04 by rvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int		arg;
	char	*tmp;

	arg = 1;
	while (arg < ac - 1)
	{
		if (ft_strcmp(av[arg], av[arg + 1]) > 0)
		{
			tmp = av[arg];
			av[arg] = av[arg + 1];
			av[arg + 1] = tmp;
			arg = 1;
		}
		else
			arg++;
	}
	arg = 1;
	while (arg < ac)
	{
		ft_putstr(av[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
