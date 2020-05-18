/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:30:05 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/18 08:30:16 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_push_swap.h"

void run_push_swap(t_stacks *container)
{
  t_moves *moves = NULL;
  
  if(container->max_stack_len == 1)
    return ;
  if (container->max_stack_len == 2)
    sort_two(container);
  else if (container->max_stack_len == 3)
    sort_three(container, 'a');
  else if (container->max_stack_len < 6)
    sort_five(container);
  else {
    if ((moves = malloc(1 * sizeof(*moves))))
    {
      sort_large(container, moves, container->max_stack_len);
      free(moves);
    }  
  }
}