/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 21:08:38 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 23:56:30 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

// set_up() if the first three elements are the largest elements in the stack, put them at the bottom of stack a.
// else push them to the top of stack b and sort them in reverse eg. biggest to smallest.

void  set_up(t_stacks *container, int max_a)
{
  int i = 0;
  t_stack *stack_a = NULL;

  if ((stack_a = container->stack_a_head->next))
  {
    while (i < 3)
    {
      if (stack_a->index > max_a - 3)
        ra(container);
      else
      {
        pb(container);
        ++i;
      }
    }
    reverse_sort_three(container, 'b');
  }
}

void find_best_move(t_moves *moves, t_stack *stack_a, t_stack *stack_b)
{
  int a_moves;
  int b_moves;
  int total;

  moves_init(moves, stack_a, stack_b);
  stack_a = stack_a->next;
  while(stack_a)
  {
    b_moves = moves_count(stack_b, stack_a->index);
    moves_calc(moves, &a_moves, &b_moves, &total);
    if (stack_a->index > moves->max_a - 3)
      total = total + 200;
    if (total < moves->total_moves)
      set_best_move(moves, a_moves, b_moves, total);
    moves->position++;
    stack_a = stack_a->next;
  }
}