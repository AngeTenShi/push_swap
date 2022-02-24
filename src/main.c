/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:58:15 by anggonza          #+#    #+#             */
/*   Updated: 2022/02/24 17:02:50 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
	{
		ft_putstr("Not enougth arguments\n");
		return (0);
	}
	else if (ac == 2)
	{
		ft_parse_single();
	}
	else
	{
		ft_parse_multiple();
	}
}
