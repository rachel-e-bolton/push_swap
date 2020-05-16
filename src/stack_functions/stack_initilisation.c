/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initilisation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:18:08 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 18:06:01 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

t_stack *new_node(int val)
{
    t_stack *node;

  if (!(node = malloc(1 * sizeof(*node))))
    return(NULL);
    
  node->index = 0;
  node->value = val;
  node->is_master = false;
  node->prev = NULL;
  node->next = NULL;

  return(node); 
}

bool  add_node(t_stack *stack, int val)
{
  //calls new_node.
  //adds node to stack 
}

void  set_stack_a(t_stacks *container, t_int_array *int_array)
{
  if (container->stack_a_head)
  {
    //calls add_node in a loop until all the ints in the array have been added to a node.
    //normalises the stack void normalise(t_stack *stack, int count)
  }
}

t_stack *initialise_stack(void) 
{
  t_stack *master_node;

  if (!(master_node = malloc(1 * sizeof(*master_node))))
    return(NULL);
    
  master_node->index = 0;
  master_node->value = 0;
  master_node->is_master = true;
  master_node->prev = NULL;
  master_node->next = NULL;

  return(master_node); 
}

t_stacks *init_stacks(t_int_array *int_array)
{
  t_stacks  *container = NULL;

  if (int_array) {
      if (!(container = malloc(1 * sizeof(*container))))
        return(NULL);
        
      container->operation_list = NULL;
      container->stack_a_head = initialise_stack();
      container->stack_b_head = initialise_stack();
  }
  set_stack_a(container, int_array);
  return(container);
}

