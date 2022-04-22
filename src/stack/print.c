/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:31:35 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 12:21:34 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	print_stack(t_list **stack)
{
	t_list	*element;
	int		print;

	element = *stack;
	while (element)
	{
		print = element->content;
		printf("%d\n", print);
		element = element->next;
	}
}
