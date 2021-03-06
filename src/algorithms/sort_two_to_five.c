/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two_to_five.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:55:02 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/18 08:32:52 by rbolton          ###   ########.fr       */
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
  
  (stack_to_sort == 'a') ? (head = container->stack_a_head) : (head = container->stack_b_head);
  while (!(is_sorted_single(container->stack_a_head)))
  {
    if (head->next && head->next->next && head->next->next->next)
    {
      one = head->next->value;
      two = head->next->next->value;
      thr = head->next->next->next->value;
    }
    if (one < two && one < thr && two > thr)
      (stack_to_sort == 'a') ? rra(container) : rrb(container);
    else if (one > two && one < thr && two < thr)
      (stack_to_sort == 'a') ? sa(container) : sb(container);
    else if (one < two && one > thr && two > thr)
      (stack_to_sort == 'a') ? rra(container) : rrb(container);
    else if (one > two && one > thr && two < thr)
      (stack_to_sort == 'a') ? ra(container) : rb(container);
    else if (one > two && one > thr && two > thr)
      (stack_to_sort == 'a') ? ra(container) : rb(container);
    (stack_to_sort == 'a') ? (head = container->stack_a_head) : (head = container->stack_b_head);
  }
}

void reverse_sort_three(t_stacks *container, char stack_to_sort)
{
  int one = 0;
  int two = 0;
  int thr = 0;
  t_stack *head = NULL;
  
  (stack_to_sort == 'a') ? (head = container->stack_a_head) : (head = container->stack_b_head);
  while (!(is_sorted_single_rev(head)))
  {
    if (head->next && head->next->next && head->next->next->next)
    {
      one = head->next->value;
      two = head->next->next->value;
      thr = head->next->next->next->value;
    }
    if (one > two && one > thr && two < thr)
      (stack_to_sort == 'a') ? rra(container) : rrb(container);
    else if (one < two && one > thr && two > thr)
      (stack_to_sort == 'a') ? sa(container) : sb(container);
    else if (one > two && one < thr && two < thr)
      (stack_to_sort == 'a') ? rra(container) : rrb(container);
    else if (one < two && one < thr && two > thr)
      (stack_to_sort == 'a') ? ra(container) : rb(container);
    else if (one < two && one < thr && two < thr)
      (stack_to_sort == 'a') ? ra(container) : rb(container);
    (stack_to_sort == 'a') ? (head = container->stack_a_head) : (head = container->stack_b_head);
  }
}

void  pb_smallest(t_stacks  *container)
{
	t_stack *smallest = NULL;
	t_stack *cursor = NULL;

	smallest = container->stack_a_head->next;
	cursor = smallest;
	while (cursor)
	{
		if (cursor->index < smallest->index)
			smallest = cursor;
		cursor = cursor->next;
	}
  cursor = container->stack_a_head;
	if (from_start(cursor, smallest) < to_end(cursor, smallest))
	{
		while (cursor->next != smallest)
			ra(container);
		pb(container);
	}
	else
	{
		while (cursor->next != smallest)
			rra(container);
		pb(container);
	}
}

void  sort_five(t_stacks *container)
{
  int stack_hght = 0;

  if (is_sorted_index(container))
    return ;
  while ((stack_hght = stack_height(container->stack_a_head) > 3))
    pb_smallest(container);
  sort_three(container, 'a');
  pa(container);
  pa(container);
}
