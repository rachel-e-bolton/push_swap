/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 11:35:59 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../src/checker_push_swap.h"

int main (int ac, char **av) 
{  
  t_int_array *int_array = NULL;

  if (ac == 2) // We expect a single string as argument. Only reading av[1]. No flags
  {
    int_array = valid_input_check(av[1]);
    while (int_array->len--)
    {
      printf("%d\n", *int_array->array);
      ++int_array->array;
    }
  } 
  else 
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}