/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:21 by anggonza          #+#    #+#             */
/*   Updated: 2022/05/04 12:59:14 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
//TODO RETIRER CET INCLUDE
void	free_split(char **splitted);
int		ft_parse_single(char *str);
int		ft_parse_multiple(char **av, int ac);
void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_arguments,
			int size);
void	push_swap(char **parsed_arguments, int splitted, int *size);
int		ft_strlenn(char **str);
void	print_stack(t_list **stack);
void	swap(t_list **stack, char *print);
void	rotate(t_list **stack, char *print);
void	push(t_list **source, t_list **destination, char *print);
void	rrotate(t_list **stack, char *print);
void	ss(t_list **stack_a, t_list **stack_b, char *print);
void	rr(t_list **stack_a, t_list **stack_b, char *print);
void	rrr(t_list **stack_a, t_list **stack_b, char *print);
int		ft_is_sort(t_list *stack_a, t_list *stack_b);
void	ft_sort_int_tab(int *tab, int size);
void	sort(t_list **stack_a, t_list **stack_b);
void	case_3(t_list **stack_a);

#endif
