/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:50:38 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 12:58:09 by anggonza         ###   ########.fr       */
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
	if (first > second && second < third)
		swap(stack_a, "sa\n");
	if (first > second && second > third)
	{
		swap(stack_a, "sa\n");
		rrotate(stack_a, "rra\n");
	}
	if (first > second && second < third)
		rotate(stack_a, "ra\n");
	if (first < second && second > third && third > first)
	{
		swap(stack_a, "sa\n");
		rotate(stack_a, "ra\n");
	}
	if (first < second && second > third)
		rrotate(stack_a, "rra\n");
}
