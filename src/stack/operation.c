/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:53:45 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/29 16:46:06 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack, char *print)
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
	ft_putstr_fd(print, 1);
}

void	rotate(t_list **stack, char *print)
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
	ft_putstr_fd(print, 1);
}

void	rrotate(t_list **stack, char *print)
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
	ft_putstr_fd(print, 1);
}

void	push(t_list **source, t_list **destination, char *print)
{
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
	ft_putstr_fd(print, 1);
}
