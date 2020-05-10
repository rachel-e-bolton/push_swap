/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:07:00 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 17:09:19 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/checker_push_swap.h"

int main (int ac, char **av) 
{  
  if (ac == 2) // We expect a single string as argument. Only reading av[1].
  {
    not_int_check(av[1]);
  } 
  else 
  {
    ft_putstr_fd("Error\n", 2);
    exit(1);
  }
}