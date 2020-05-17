/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:16:23 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 09:24:25 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  sa(t_stacks *container)
{
  ft_swap(container->stack_a_head);
  if (!(container->is_checker))
    return (ft_putendl("sa"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  sb(t_stacks *container)
{
  ft_swap(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("sb"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  ss(t_stacks *container)
{
  ft_swap(container->stack_a_head);
  ft_swap(container->stack_b_head);
  if (!(container->is_checker))
    return (ft_putendl("ss"));
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}