/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:50 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 19:54:41 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <checker_push_swap.h>

int main (int ac, char **av) 
{
  t_int_array *int_array = NULL;
  char *args = NULL;
  t_stacks *container = NULL;
  
  if (ac >= 2) // We expect a single string as argument. Only reading av[1]. No flags
  {
    (ac > 2) ? (args = implode_args(av, ac)) : (args = &(*av[1]));
    int_array = valid_input_check(args);
    container = init_stacks(int_array, true);
    if (container)
    {
      if (container->stack_a_head)
      {
        t_stack *cursor = &(*container->stack_a_head);
        if (cursor->is_master == true)
        {
          ft_putstr("Stack A:\n--------\n");
        }
          cursor = cursor->next;
        while (cursor->next)
        {
          ft_putnbr_endl(cursor->value);
          cursor = cursor->next;
        }
        ft_putnbr_endl(cursor->value);
        ft_putstr("--------\n");
      }    
    }
  } 
  else
  {
    exit(1);
  }
}