/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:58:15 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/03 17:07:10 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	//t_stack	stack_a;
	//t_stack	stack_b;

	if (ac < 2)
	{
		ft_putstr_fd("Not enougth arguments\n", 2);
		return (0);
	}
	else if (ac == 2)
	{
		if (!ft_parse_single(av[1]))
			ft_putstr_fd("Error \n", 2);
		else
			ft_putstr_fd("Valid\n", 1);
		return (0);
	}
	else
	{
		return (1);
		//ft_parse_multiple(av);
	}
	//init_stack(&stack_a)
	return (1);
}
