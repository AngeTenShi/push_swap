/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:56:05 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/09 11:28:39 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int ft_strlenn(char **str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int *parse(char **str)
{
	int i;
	int  *new;

	new = ft_calloc(sizeof(int) * ft_strlenn(str), sizeof(int));
	i = 0;
	while (str[i])
	{
		new[i] = ft_atoi(str[i]);
		i++;
	}
	return (new);
}

void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_arguments)
{
	int i;

	i = 0;
	while (parsed_arguments[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(&parsed_arguments[i]));
		i++;
	}
	*stack_b = ft_lstnew(NULL);
}

void    print_stack(t_list **stack)
{
	t_list  *element;

	element = *stack;
	while(element)
	{
		int *print = element->content;
		printf("%d\n", *print);
		element = element->next;
	}
}

void	push_swap(char **str)
{
	t_list  *stack_a;
	int     *parsed_args;
	t_list  *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parsed_args = parse(str);
	init_stack(&stack_a, &stack_b, parsed_args);
	print_stack(&stack_a);
	return ;
}
