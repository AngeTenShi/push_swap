/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:58:15 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/22 18:21:06 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;
	char	**parsed_args;

	if (ac < 2)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	else if (ac == 2)
	{
		if (!ft_parse_single(av[1]))
			ft_putstr_fd("Error \n", 2);
		else
			parsed_args = ft_split(av[1], ' ');
		return (0);
	}
	else
	{
		if (!ft_parse_multiple(av, ac))
			ft_putstr_fd("Error \n", 2);
		else
			parsed_args = av;
		return (0);
	}
	push_swap(&stack_a, &stack_b, parsed_args);
	return (1);
}
