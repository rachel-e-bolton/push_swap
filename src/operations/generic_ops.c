/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 23:15:13 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 08:38:38 by rbolton          ###   ########.fr       */
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

void  ft_rotate(t_stack *stack)
{
  t_stack *head = NULL;
  t_stack *first_node = NULL;
  t_stack *last_node = NULL;

  if (stack->is_master == true)
    head = stack;
  if(!(first_node = head->next))
    return ;
  if (first_node && (last_node = first_node->next))
  {
    while (last_node->next)
      last_node = last_node->next;
    if (first_node->next == last_node)
      return (ft_swap(stack));
    head->next = first_node->next;
    first_node->next->prev = head;
    last_node->next = first_node;
    first_node->prev = last_node;
    first_node->next = NULL;
  } 
}

void  ft_rev_rotate(t_stack *stack)
{
  t_stack *first_node = NULL;
  t_stack *last_node = NULL;
  t_stack *second_last = NULL;

  if (stack->is_master == true)
    first_node = stack->next;
  if (!first_node || !(last_node = first_node->next) || !(second_last = first_node->next))
    return ;
  while (last_node->next)
    last_node = last_node->next;
  if (last_node == first_node->next)
    return (ft_swap(stack));
  while (second_last->next->next)
    second_last = second_last->next;
  second_last->next = NULL;
  stack->next = last_node;
  last_node->prev = stack;
  last_node->next = first_node;
  first_node->prev = last_node;
}