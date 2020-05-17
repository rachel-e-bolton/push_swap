/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initilisation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:18:08 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 15:39:23 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

t_stack *ft_new_node(int val)
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

bool  add_node(t_stack *stack_a, int val)
{
  t_stack *new_node = NULL;
  t_stack *cursor = NULL;

  cursor = stack_a;
  if ((new_node = ft_new_node(val)))
  {
    while (cursor->next)
      cursor = cursor->next;
    cursor->next = new_node;
    new_node->prev = cursor;
    return(true);
  }
  return (false);
}

void  set_stack_a(t_stacks *container, t_int_array *int_array)
{
  int len = 0;
  int i = 0;
    
  if (container->stack_a_head && int_array->len && int_array->array) 
  {
    len = int_array->len;
    while (i < len)
    {
      if (!(add_node(container->stack_a_head, int_array->array[i])))
      {
        exit(1);
      }
      ++i;
    }
  }
  else {
    exit(1); 
  }
}

t_stack *initialise_stack() 
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

t_stacks *init_stacks(t_int_array *int_array, bool is_checker)
{
  t_stacks  *container = NULL;

  if (int_array) {
      if (!(container = malloc(1 * sizeof(*container))))
        return(NULL);
      container->v_flag = int_array->v_flag;
      container->is_checker = is_checker;
      container->max_stack_len = int_array->len;
      container->operation_list = NULL;
      container->stack_a_head = initialise_stack();
      container->stack_b_head = initialise_stack();
  }
  set_stack_a(container, int_array);
  normalise_stack(container->stack_a_head, container->max_stack_len);
  return(container);
}

