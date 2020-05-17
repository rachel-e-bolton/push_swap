/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:16:08 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 09:07:40 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  rra(t_stacks *container)
{
  ft_rev_rotate(container->stack_a_head);
  if (!(container->is_checker))
    return (ft_putendl("rra"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  rrb(t_stacks *container)
{
  ft_rev_rotate(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("rrb"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  rrr(t_stacks *container)
{
  ft_rev_rotate(container->stack_a_head);
  ft_rev_rotate(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("rrr"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}