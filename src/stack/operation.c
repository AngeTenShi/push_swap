/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:53:45 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/25 12:05:31 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp_swap;
	int		tmp_val;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = *stack;
	tmp_swap = tmp->next;
	tmp_val = tmp->content;
	tmp->content = tmp_swap->content;
	tmp_swap->content = tmp_val;
}

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	if (ft_lstsize(tmp) < 2)
		return ;
	last = *stack;
	*stack = tmp->next;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	rrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*previous;

	first = *stack;
	last = *stack;
	while (last->next)
	{
		previous = last;
		last = last->next;
	}
	last->next = first;
	previous->next = NULL;
	*stack = last;
}

void	push(t_list **source, t_list **destination)
{
// PUSH SOURCE DANS DESTINATION
	t_list	*tmp_source;
	t_list	*tmp_dest;

	tmp_source = *source;
	tmp_dest = *destination;
	if (!tmp_dest)
	{
		ft_lstadd_back(destination, ft_lstnew(tmp_source->content));
		*source = tmp_source->next;
		return ;
	}
	*source = tmp_source->next;
	*destination = tmp_source;
	(*destination)->next = tmp_dest;
}
