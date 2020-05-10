/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:34:30 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 21:23:27 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_push_swap.h"

int *valid_input_check(char *args)
{
  t_long_array *long_ptr = NULL;
  int *ptr = NULL;

  if (args) {
    not_int_check(args);
    long_ptr = set_atol_array(args);
    size_and_duplic_check(long_ptr);
    ptr = int_array_from_long(long_ptr);
    free(long_ptr->array);
    free(long_ptr);
    return(ptr);
  }
  else
  {
   ft_putstr_fd("Error\n", 2);
   exit(1); 
  }
}