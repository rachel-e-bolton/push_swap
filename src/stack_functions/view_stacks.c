/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 20:30:50 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 21:53:57 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void  print_line(char *a, char *b)
{
  int len_a = 0;
  int len_b = 0;
  int a_diff = 0;
  int b_diff = 0;
  
  if (a)
    len_a = ft_strlen(a);
  if (b)
    len_b = ft_strlen(b);
    
  a_diff = 12 - len_a;
  b_diff = 12 - len_b;
  ft_putchar('|');
  while (a_diff--)
  {
    ft_putchar(' ');
  }
  ft_putstr(a);
  ft_putstr(" || ");
  ft_putstr(b);
  while (b_diff--)
  {
    ft_putchar(' ');
  }
  ft_putendl("|");
}

void  print_stack_status(t_stacks *container)
{
  if (container)
  {
    t_stack *cursor_a = &(*container->stack_a_head);
    t_stack *cursor_b = &(*container->stack_b_head);
    
    if (cursor_a->is_master == true && cursor_b->is_master == true)
    {
      ft_putstr("|-------------||-------------|\n|     Stack A || Stack B     |\n|-------------||-------------|\n");
    }
    if (cursor_a->next)
      cursor_a = cursor_a->next;
    if (cursor_b->next)
      cursor_b = cursor_b->next;    
    while (cursor_a->next && cursor_b->next)
    {
      char *a = ft_itoa(cursor_a->value);
      char *b = ft_itoa(cursor_b->value);
      print_line(a, b);
      cursor_a = cursor_a->next;
      cursor_b = cursor_b->next;
    }
    if (!(cursor_a->next) && !(cursor_b->next)) {
      char *a = ft_itoa(cursor_a->value);
      char *b = ft_itoa(cursor_b->value);
      print_line(a, b);
    }
    else if (cursor_a->next && !(cursor_b->next))
    {
      while (cursor_a->next)
      {
        char *a = ft_itoa(cursor_a->value);
        char *b = NULL;
        print_line(a, b);
        cursor_a = cursor_a->next;
      }
      char *a = ft_itoa(cursor_a->value);
      char *b = NULL;
      print_line(a, b);
    }
    else if (cursor_b->next && !(cursor_a->next))
    {
      while (cursor_b->next)
      {
        char *b = ft_itoa(cursor_a->value);
        char *a = NULL;
        print_line(a, b);
        cursor_b = cursor_b->next;
      }
      char *b = ft_itoa(cursor_b->value);
      char *a = NULL;
      print_line(a, b);
    }
    ft_putstr("|-------------||-------------|\n");
  } 
}