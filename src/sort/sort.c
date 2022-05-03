/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:01:24 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/03 18:07:18 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	b_to_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*stack;

	stack = *stack_b;
	while (stack)
	{
		push(stack_b, stack_a, "pb\n");
		stack = *stack_b;
	}
}

void	radix_ith_bits(t_list **stack_a, t_list **stack_b, int i)
{
	t_list	*stack;
	int		count;
	int		init_sizestack;

	init_sizestack = ft_lstsize(*stack_a);
	stack = *stack_a;
	count = 0;
	while (stack && count < init_sizestack)
	{
		if (((stack->content >> i) & 1) == 0)
			push(stack_a, stack_b, "pa\n");
		else
			rotate(stack_a, "ra\n");
		stack = *stack_a;
		count++;
	}
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	if (ft_lstsize(*stack_a) == 2)
		case_2(stack_a);
	if (ft_lstsize(*stack_a) == 3)
		case_3(stack_a);
	while (!ft_is_sort(*stack_a, *stack_b))
	{
		radix_ith_bits(stack_a, stack_b, i);
		b_to_a(stack_a, stack_b);
		i++;
	}
}
