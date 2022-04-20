/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:58:15 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 15:44:14 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid(int ac, char **av, int *splitted, char ***parsed_args)
{
	if (ac < 2)
		exit(0);
	else if (ac == 2)
	{
		if (!ft_parse_single(av[1]))
			return (0);
		else
		{
			*parsed_args = ft_split(av[1], ' ');
			*splitted = 1;
			return (1);
		}
		if (parsed_args)
			return (1);
	}
	else
	{
		if (!ft_parse_multiple(av, ac))
			return (0);
		else
		{
			*parsed_args = &av[1];
			return (1);
		}
	}
}
// TODO : FREE TOUTES LES CHAINED LIST (FUNCTION FREE_LIST)

int	main(int ac, char **av)
{
	char	**parsed_args;
	int		splitted;

	splitted = 0;
	parsed_args = NULL;
	if (!is_valid(ac, av, &splitted, &parsed_args))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (ft_strlenn(parsed_args) == 1)
	{
		free_split(parsed_args);
		return (0);
	}
	push_swap(parsed_args);
	if (splitted)
		free_split(parsed_args);
	return (1);
}
