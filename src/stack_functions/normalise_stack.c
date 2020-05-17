/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:13:19 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 14:41:14 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

// Loops through looking for the highest valued, unindexed node and gives that node an index equal to the current stack_len. 
// Called recursively, with stack_len decrementing on each call, values are indexed from highest to lowest;
// Where the index of the highest valued unindexed node on each call is given the current stack_len value.

void  normalise_stack(t_stack *stack, int stack_len) 
{
  t_stack *cursor;
  t_stack *max_node;

  if (stack_len < 1)
    return ;
  if ((stack->is_master == true) && (max_node = stack->next) && (cursor = stack->next))
  {
    while ((max_node->index > 0) && max_node) // loop through nodes until we find our first unindexed node (index = 0)
      max_node = max_node->next;
    while (cursor) // while the cursor points to a node - this loops through the entire stack
    {
      if (cursor->index == 0) // if the index of the current node is 0
      {
        if (cursor->value > max_node->value) // if the value of the number at that node is greater than the value of the node currently pointed by max_node
          max_node = cursor; // then set the max_node to now point to this unindexed node
      }
      cursor = cursor->next;
    }
    max_node->index = stack_len;
    normalise_stack(stack, --stack_len);
  }
}