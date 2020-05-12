/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_initilisations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:18:08 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/12 21:01:07 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

t_stacks *init_stacks(t_int_array *int_array)
{
  t_stacks *container = NULL;

  if ((container = malloc(1 * sizeof(*container))))
  {
    container->operation_list = NULL;
    container->stack_a_head = NULL;
    container->stack_b_head = NULL;
  }
  
  
  // Set the t_stacks operation_list to null;
  // Initialise stack A with the int array values - including normalisation
  // Initialise an empty stack B
  // return pointer to the t_stacks
}