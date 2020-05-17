/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_actions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 09:33:03 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 14:45:40 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_push_swap.h"

bool  do_operation(t_stacks *container, char *str)
{
  if (ft_strequ(str, "sa"))
    sa(container);
  else if (ft_strequ(str, "sb"))
    sb(container);
  else if (ft_strequ(str, "ss"))
    ss(container);
  else if (ft_strequ(str, "pa"))
    pa(container);
  else if (ft_strequ(str, "pb"))
    pb(container);
  else if (ft_strequ(str, "ra"))
    ra(container);
  else if (ft_strequ(str, "rb"))
    rb(container);
  else if (ft_strequ(str, "rr"))
    rr(container);
  else if (ft_strequ(str, "rra"))
    rra(container);
  else if (ft_strequ(str, "rrb"))
    rrb(container);
  else if (ft_strequ(str, "rrr"))
    rrr(container);
  else
    return(false);
  return(true);
}

bool  get_operations(t_stacks *container)
{
  char  *line = NULL;
  int   ret = 0;

  while ((ret = get_next_line(0, &line)) > 0)
  {
    if (!(do_operation(container, line)))
    {
      ft_putendl("Error");
      free(line);
      return(false);
    }
    free(line);
  }
  return(true);
} 

int run_checker(t_stacks *container)
{
  if (!(get_operations(container)))
    return(1);
  if (is_sorted_index(container))
  {
    ft_putendl("OK");
    return(0);
  }
  else 
  {
    ft_putendl("KO");
    return(1);
  }
}