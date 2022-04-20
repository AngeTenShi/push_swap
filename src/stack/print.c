/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:31:35 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 17:36:14 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*element_a;
	t_list	*element_b;
	int		print_a;
	int		print_b;

	element_a = *stack_a;
	element_b = *stack_b;
	while (element_a)
	{
		print_a = element_a->content;
		print_b = element_b->content;
		printf("%d          %d\n", print_a, print_b);
		element_a = element_a->next;
		if (element_b->next)
			element_b = element_b->next;
	}
	printf("A          B\n");
}
