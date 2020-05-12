/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/12 17:53:19 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <checker_push_swap.h>

int main (int ac, char **av) 
{  
  t_int_array *int_array = NULL;
  char *args = NULL;

  if (ac >= 2) // We expect a single string as argument. Only reading av[1]. No flags
  {
    (ac > 2) ? (args = implode_args(av, ac)) : (args = &(*av[1]));
    int_array = valid_input_check(args); 
  } 
  else
  {
    exit(1);
  }
}