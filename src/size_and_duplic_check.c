/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_and_duplic_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:24:42 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 11:10:05 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker_push_swap.h"

void check_size(long *array, int len)
{
  int i = 0;
  
  if (array && len)
  {
    while (i < len)
    {
      if (!((array[i] <= INT_MAX) && (array[i] >= INT_MIN)))
      {
        ft_putstr_fd("Error\n", 2);
        exit(1);
      }
      i++;
    }
  }
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}

void check_duplicates(long *array, int len)
{
  int i = 0;
  int j = 0;
  
  if (array && len)
  {
    while (i < len)
    {
      while (j < len)
      {
        if (j != i)
        {
          if (array[i] == array[j])
          {
            ft_putstr_fd("Error\n", 2);
            exit(1);
          }
        }
        ++j;
      }
      j = 0;
      ++i;
    }
  }
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}

void size_and_duplic_check(t_long_array *long_array)
{
  if (long_array && long_array->array)
  {
    check_size(long_array->array, long_array->len);
    check_duplicates(long_array->array, long_array->len);  
  }
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}