/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_array_from_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:42:42 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 20:41:55 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

t_int_array *int_array_from_long(t_long_array *long_array)
{
  int i = 0;
  t_int_array *ptr = NULL;
  
  if (long_array)
  {
    if ((ptr = malloc(1 * sizeof(*ptr))))
    {
      if ((ptr->array = malloc(long_array->len * sizeof(*ptr->array))))
      {
        ptr->len = long_array->len;
        while (i < long_array->len)
        {
          ptr->array[i] = (int)long_array->array[i];
          ++i;
        }
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