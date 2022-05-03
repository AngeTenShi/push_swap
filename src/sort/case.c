/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:56:59 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/03 18:08:00 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	case_2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		swap(stack_a, "sa\n");
}

void	case_3(t_list **stack_a)
{
	int	first;
	int	sec;
	int	third;

	first = (*stack_a)->content;
	sec = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > sec && sec < third && first < third)
		swap(stack_a, "sa\n");
	if (first < sec && sec > third && third < first)
	{
		rotate(stack_a, "ra\n");
		swap(stack_a, "sa\n");
	}
}
