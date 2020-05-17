/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_checking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 09:53:54 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 10:09:53 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

bool  is_sorted_index(t_stacks *container)
{
  t_stack *node = NULL;

  if ((container->stack_a_head->is_master == true) &&
      (container->stack_b_head->is_master == true) &&
      !(container->stack_b_head->next))
  {
    node = container->stack_a_head->next;
    while (node)
    {
      if (!(node->next))
        return(true);
      if (node->index < node->next->index)
        node = node->next;
      else
      return(false);
    } 
    return(true);
  }
  return(false);
}

bool  is_sorted_value(t_stacks *container)
{
  t_stack *node = NULL;

  if ((container->stack_a_head->is_master == true) &&
      (container->stack_b_head->is_master == true) &&
      !(container->stack_b_head->next))
  {
    node = container->stack_a_head->next;
    while (node)
    {
      if (!(node->next))
        return(true);
      if (node->value < node->next->value)
        node = node->next;
      else
      return(false);
    } 
    return(true);
  }
  return(false);
}