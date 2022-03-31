/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:56:05 by anggonza          #+#    #+#             */
/*   Updated: 2022/03/22 18:19:11 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	new = malloc(sizeof(int *) * ft_strlenn(str));
	i = 0;
	while (str[i])
	{
		new[i] =ft_atoi(str[i]);
		i++;
	}
	return (new);
}

void	init_stack(t_list *stack, int *parsed_arguments)
{
	int i;

	stack = ft_lstnew(&parsed_arguments[0]);
	i = 0;
	while (parsed_arguments[i])
	{
		ft_lstadd_front(parsed_arguments[i]);
		i++;
	}
}

void	push_swap(char **str)
{
	t_list  stack_a;
	int     *parsed_args;

	//t_list  *stack_b;
	parsed_args = parse(str);
	init_stack(&stack_a, parsed_args);
	return ;
}
