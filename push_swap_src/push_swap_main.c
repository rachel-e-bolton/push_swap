/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 09:17:31 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <checker_push_swap.h>

int main (int ac, char **av) 
{  
  t_int_array *int_array = NULL;
  char *args = NULL;
  t_stacks *container = NULL;
  bool is_checker = false;

  if (ac >= 2)
  {
    (ac > 2) ? (args = implode_args(av, ac)) : (args = &(*av[1]));
    int_array = valid_input_check(args);
    container = init_stacks(int_array, is_checker);
  } 
  else
  {
    exit(1);
  }
}