/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:50 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 20:19:11 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../src/checker_push_swap.h"

int main (int ac, char **av) 
{
  t_int_array *ptr = NULL;
  int i = 0;

  if (ac == 2) // We expect a single string as argument. Only reading av[1]. No flags
  {
    not_int_check(av[1]);
    ptr = set_atol_array(av[1]);
    
  } 
  else if (ac > 2) // We expect more than one string as argument. Valid flags: -v and -c. Aim for any order. Any string not starting with "-" we can assume to be a candidate for our args and the args test gets performed on this.
  {}
  else
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}