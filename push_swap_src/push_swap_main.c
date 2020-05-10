/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 21:29:21 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../src/checker_push_swap.h"

int main (int ac, char **av) 
{  
  int *ptr = NULL;
  
  if (ac == 2) // We expect a single string as argument. Only reading av[1].
  {
    ptr = valid_input_check(av[1]);
    while (ptr)
    {
      printf("%d", *ptr);
      ++ptr;
    }
  } 
  else 
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}