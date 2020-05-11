/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:50 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 11:36:08 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <checker_push_swap.h>

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
  else if (ac > 2) // We expect more than one string as argument. Valid flags: -v and -c. Aim for any order. Any string not starting with "-" we can assume to be a candidate for our args and the args test gets performed on this.
  {}
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}