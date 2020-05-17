/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:55:02 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 17:17:14 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  sort_two(t_stacks *container)
{
  while (!(is_sorted_index(container)))
    sa(container);
}

void sort_three(t_stacks *container, char stack_to_sort)
{
  int one = 0;
  int two = 0;
  int thr = 0;
  t_stack *head = NULL;
  
  while (!(is_sorted_single(container->stack_a_head)))
  {
      if (stack_to_sort == 'a')
        head = container->stack_a_head;
      else if (stack_to_sort == 'b')
        head = container->stack_b_head;
      if (head->next && head->next->next && head->next->next->next)
      {
        one = head->next->value;
        two = head->next->next->value;
        thr = head->next->next->next->value;
      }
      if (one < two && one < thr && two > thr)
        rra(container);
      else if (one > two && one < thr && two < thr)
        sa(container);
      else if (one < two && one > thr && two > thr)
        rra(container);
      else if (one > two && one > thr && two < thr)
        ra(container);
      else if (one > two && one > thr && two > thr)
        ra(container); 
  }
}
