/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunck_simple.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:40:03 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/25 14:48:03 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_chunck_simple(int *tab, t_list **stack_a, t_list **stack_b)
{
	int		median;
	t_list	*stack;

	median = tab[get_size(tab) / 2];
	stack = *stack_a;
	while (!ft_is_sort(stack))
	{
		if (stack->content < median)
	}
}
