/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:21 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/21 15:02:39 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <stdio.h>
//TODO RETIRER CET INCLUDE
void	free_split(char **splitted);
int		ft_parse_single(char *str);
int		ft_parse_multiple(char **av, int ac);
void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_arguments);
void	push_swap(char **parsed_arguments);
int		ft_strlenn(char **str);
void	print_stack(t_list **stack_a, t_list **stack_b);
void	swap(t_list **stack);
void	rotate(t_list **stack);
void	push(t_list **source, t_list **destination);
void	rrotate(t_list **stack);
void	ss(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
int		ft_is_sort(t_list *stack_a, t_list *stack_b);
void	ft_sort_int_tab(int *tab);
int		get_size(int *tab);
void	push_to_chunck(int *tab, t_list **stack_a, t_list **stack_b);
void	sort(int *tab, t_list **stack_a, t_list **stack_b);

#endif
