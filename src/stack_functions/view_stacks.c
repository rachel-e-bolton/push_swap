/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 20:30:50 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 17:23:04 by rbolton          ###   ########.fr       */
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
    char *a = NULL;
    char *b = NULL;
    
    if (cursor_a->is_master == true && cursor_b->is_master == true)
    {
      ft_putstr("\n|-------------||-------------|\n|     Stack A || Stack B     |\n|-------------||-------------|\n");
    }
    if (cursor_a->next)
      cursor_a = cursor_a->next;
    if (cursor_b->next)
      cursor_b = cursor_b->next;   
    while (cursor_a->next && cursor_b->next)
    {
      a = ft_itoa(cursor_a->value);
      b = ft_itoa(cursor_b->value);
      print_line(a, b);
      cursor_a = cursor_a->next;
      cursor_b = cursor_b->next;
      free(a);
      free(b);
    }
    if (!(cursor_a->next) && !(cursor_b->next)) {
      a = ft_itoa(cursor_a->value);
      b = ft_itoa(cursor_b->value);
      print_line(a, b);
      free(a);
      free(b);
    }
    if (cursor_a->next && !(cursor_b->next))
    {
      if (cursor_b)
      {
        a = ft_itoa(cursor_a->value);
        (cursor_b->is_master == true) ? (b = NULL) : (b = ft_itoa(cursor_b->value));
        print_line(a, b);
        cursor_a = cursor_a->next;
        free(a);
        free(b);
      }
      while (cursor_a->next)
      {
        a = ft_itoa(cursor_a->value);
        b = NULL;
        print_line(a, b);
        cursor_a = cursor_a->next;
        free(a);
        free(b);
      }
      a = ft_itoa(cursor_a->value);
      b = NULL;
      print_line(a, b);
      free(a);
      free(b);
    }
    if (cursor_b->next && !(cursor_a->next))
    {
      if (cursor_a) {
        b = ft_itoa(cursor_b->value);
        (cursor_a->is_master == true) ? (a = NULL) : (a = ft_itoa(cursor_a->value));
        print_line(a, b);
        cursor_b = cursor_b->next;
        free(a);
        free(b);        
      }
      while (cursor_b->next)
      {
        b = ft_itoa(cursor_b->value);
        a = NULL;
        print_line(a, b);
        cursor_b = cursor_b->next;
        free(a);
        free(b);
      }
      b = ft_itoa(cursor_b->value);
      a = NULL;
      print_line(a, b);
      free(a);
      free(b);
    }
    ft_putstr("|-------------||-------------|\n");
  } 
}