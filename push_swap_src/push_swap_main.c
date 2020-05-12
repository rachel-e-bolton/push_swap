/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 21:13:51 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../src/checker_push_swap.h"

int main (int ac, char **av) 
{  
  t_int_array *int_array = NULL;
  char *args = NULL;

  if (ac == 2) // We expect a single string as argument. Only reading av[1]. No flags
  {
    int_array = valid_input_check(av[1]);
  } 
  else if (ac > 2) // We expect more than one string as argument. Valid flags: -v and -c. Aim for any order. Any string not starting with "-" we can assume to be a candidate for our args and the args test gets performed on this.
  {
    args = implode_args(av, ac);
    int_array = valid_input_check(args);
  }
  else
  {
    exit(1);
  }
}