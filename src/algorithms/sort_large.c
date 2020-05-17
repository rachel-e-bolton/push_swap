/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:52:57 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 23:25:19 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  sort_large(t_stacks *container, t_moves *moves, int max_a)
{
  t_stack *head_a = NULL;
  t_stack *head_b = NULL;

  head_a = container->stack_a_head;
  head_b = container->stack_b_head;
  if (head_a->next && max_a > 3)
  {
    set_up(container, max_a);
    while (head_a->next && !(stack_height(head_a) == 3))
    {
      find_best_move(moves, head_a, head_b);
      while (moves->stack_a_moves || moves->stack_b_moves)
      {
        if (moves->stack_a_moves > 0 && moves->stack_b_moves > 0)
          multi_rotate_both(container, moves, 1);
        else if (moves->stack_a_moves < 0 && moves->stack_b_moves < 0)
          multi_rotate_both(container, moves, -1);
        else if (!moves->stack_b_moves && moves->stack_a_moves)
          multi_rotate_a(container, moves);
        else
          multi_rotate_b(container, moves);
      }
		  pb(container);
	  }
	  sort_three(container, 'a');
	  push_back_to_a(container);
  }
}