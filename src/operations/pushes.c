/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:15:59 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 08:52:38 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  pa(t_stacks *container)
{
  ft_push(container->stack_b_head, container->stack_a_head);
  if (!(container->is_checker))
    ft_putendl("pa");
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}

void  pb(t_stacks *container)
{
  ft_push(container->stack_a_head, container->stack_b_head);
  if (!(container->is_checker))
    ft_putendl("pb");
  if (container->is_checker && container->v_flag)
    print_stack_status(container);
}