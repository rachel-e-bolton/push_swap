/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_measures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 19:38:43 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 20:25:47 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

int stack_height(t_stack *stack)
{
  t_stack *start = NULL;
  int len = 0;
  if (stack->is_master == true)
  {
    start = stack->next;
    while (start)
    {
      ++len;
      start = start->next;
    }
  }
  return(len);
}

int from_start(t_stack *start, t_stack *marker)
{
  int len = 0;

  while (start->next)
  {
    if (start->next == marker)
      return(len);
    ++len;
    start = start->next;
  }
  return(len);
}

int to_end(t_stack *start, t_stack *marker)
{
  int len = 0;

  while (start != marker)
    start = start->next;
  while (marker)
  {
    marker = marker->next;
    ++len;
  }
  return(len);
}