/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:15:13 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 01:28:52 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  ft_swap(t_stack *stack)
{
  t_stack *top_node = NULL;
  t_stack *second_node = NULL;
  
  if ((stack->is_master == true) && stack->next && stack->next->next)
  {
    top_node = stack->next;
    second_node = top_node->next;
    top_node->next = second_node->next;
    second_node->prev = top_node->prev;
    top_node->prev = second_node;
    second_node->next = top_node;
    stack->next = second_node;
  }
}

void  ft_push(t_stack *sender, t_stack *receiver)
{
  t_stack *tmp_sender = NULL;
  t_stack *tmp_receiver = NULL;

  if (sender->next && receiver->next)
    if (sender->next->value == receiver->next->value)
      return ;
	tmp_sender = sender->next;
	tmp_receiver = receiver->next;
	if (!tmp_sender)
		return ;
	sender->next = tmp_sender->next;
	if (sender->next)
		sender->next->prev = sender;
	receiver->next = tmp_sender;
	tmp_sender->prev = receiver;
	if (!tmp_receiver)
		tmp_sender->next = NULL;
	else
	{
		tmp_receiver->prev = tmp_sender;
		tmp_sender->next = tmp_receiver;
	}
}