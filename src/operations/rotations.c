/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:16:15 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 09:12:30 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  ra(t_stacks *container)
{
  ft_rotate(container->stack_a_head);
  if (!(container->is_checker))
    return (ft_putendl("ra"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  rb(t_stacks *container)
{
  ft_rotate(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("rb"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  rr(t_stacks *container)
{
  ft_rotate(container->stack_a_head);
  ft_rotate(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("rr"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}