/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_atol_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:29:25 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 22:35:53 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include "../checker_push_swap.h"

t_long_array *set_atol_array(char *args)
{
  int i;
  int j;
  long *ptr;
  bool v_flag;
  t_long_array *long_array;

  i = 0;
  j = 0;
  ptr = NULL;
  v_flag = false;
  long_array = NULL;
  
  if (args && (long_array = malloc(1 * sizeof(long_array))))
  {
    if ((args[0] == '-') && (args[1] == 'v') && (args[2] == ' '))
    {
      i = 3;
      v_flag = true;
    }
    if ((ptr = malloc(((ft_strlen(args) - 2) * sizeof(ptr))))) 
    {
      while (is_just_space(args[i]) || (args[i] == '-') || ft_isdigit(args[i]))
      {
        ptr[j] = ft_atol(args + i);
        while (((args[i] == '-') && (ft_isdigit(args[i + 1]))) || ft_isdigit(args[i])) {
          ++i;
        }
        ++i;
        ++j;
      }
    }
    if ((long_array->array = malloc(j * sizeof(long_array->array))))
    {
      i = 0;
      long_array->v_flag = v_flag;
      long_array->len = j;
      while (i <= long_array->len)
      {
        long_array->array[i] = ptr[i];
        ++i;
      }
      free(ptr);
      return(long_array);
    }
    free(ptr);
  }
  return(NULL);
}