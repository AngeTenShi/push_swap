/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anggonza <anggonza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:21 by anggonza          #+#    #+#             */
/*   Updated: 2022/04/20 16:34:37 by anggonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

void	free_split(char **splitted);
int		ft_parse_single(char *str);
int		ft_parse_multiple(char **av, int ac);
void	init_stack(t_list **stack_a, t_list **stack_b, int *parsed_arguments);
void	push_swap(char **parsed_arguments);
int		ft_strlenn(char **str);
void	print_stack(t_list **stack_a, t_list **stack_b);
void	swap(t_list **stack);
void	rotate(t_list **stack);

#endif
