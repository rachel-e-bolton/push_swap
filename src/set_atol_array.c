/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_atol_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:29:25 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 20:18:47 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./checker_push_swap.h"

t_int_array *set_atol_array(char *args)
{
  int i;
  int j;
  int *ptr;
  t_int_array *int_array;

  i = 0;
  j = 0;
  ptr = NULL;
  int_array = NULL;
  
  if (args && (int_array = malloc(1 * sizeof(int_array))))
  {
    if ((ptr = malloc((ft_strlen(args) * sizeof(ptr))))) 
    {
      while ((ptr[j] = ft_atol((args + i))))
      {
        ptr[j] = ft_atol((args + i));
        while (ft_isdigit(args[i])) {
          ++i;
        }
        ++i;
        ++j;
      }
    }
    if ((int_array->array = malloc((j + 1) * sizeof(int_array->array))))
    {
      i = 0;
      int_array->len = j;
      while (i <= int_array->len)
      {
        int_array->array[i] = ptr[i];
        ++i;
      }
    }
    free(ptr);
  }
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(0);
  }
  return(int_array);
}