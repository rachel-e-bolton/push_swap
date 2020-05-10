/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_array_from_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:42:42 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 21:19:39 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_push_swap.h"

int *int_array_from_long(t_long_array *long_array)
{
  int i = 0;
  int *ptr = NULL;
  
  if (long_array)
  {
    if ((ptr = malloc(long_array->len * sizeof(*ptr))))
    {
      while (i < long_array->len)
      {
        ptr[i] = (int)long_array->array[i];
        ++i;
      }
      return(ptr);
    }
    else 
    {
      ft_putstr_fd("Error\n", 2);
      exit(1);
    }
  }
  else 
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}