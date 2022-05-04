/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:50:38 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 14:11:11 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_3(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > second && second < third && third > first)
		swap(stack_a, "sa\n");
	if (first > second && second > third && first > third)
	{
		swap(stack_a, "sa\n");
		rrotate(stack_a, "rra\n");
	}
	if (first > second && second < third && third < first)
		rotate(stack_a, "ra\n");
	if (first < second && second > third && third > first)
	{
		swap(stack_a, "sa\n");
		rotate(stack_a, "ra\n");
	}
	if (first < second && second > third && third < first)
		rrotate(stack_a, "rra\n");
}

void	case_5(t_list **stack_a, t_list **stack_b)
{
	int		i;

	i = 0;
	while (i < 5)
	{
		if ((*stack_a)->content < 2)
			push(stack_a, stack_b, "pb\n");
		else
			rotate(stack_a, "ra\n");
		i++;
	}
	case_3(stack_a);
	if ((*stack_b)->content < (*stack_b)->next->content)
	{
		swap(stack_b, "sb\n");
		push(stack_b, stack_a, "pa\n");
		push(stack_b, stack_a, "pa\n");
	}
	else
	{
		push(stack_b, stack_a, "pa\n");
		push(stack_b, stack_a, "pa\n");
	}
}
