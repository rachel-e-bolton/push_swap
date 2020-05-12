/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_swap.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:41 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/12 22:21:25 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_PUSH_SWAP_H
# define CHECKER_PUSH_SWAP_H
# define TRUE 1
# define FALSE 0
# define INT_MIN -2147483648
# define INT_MAX +2147483647
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct  s_long_array
{
  long *array;
  int len;
}               t_long_array;

typedef struct  s_int_array
{
  int *array;
  int len;
}               t_int_array;

typedef struct  s_stack
{
  int value;
  int index;
  bool  is_master;
  struct s_stack  *prev;
  struct s_stack  *next;
}               t_stack;

typedef struct  s_operation
{
  char  *operation;
  struct s_operation *prev;
  struct s_operation *next;
}               t_operation;

typedef struct  s_stacks
{
  t_operation *operation_list;
  t_stack     *stack_a_head;
  t_stack     *stack_b_head;
}               t_stacks;


void  not_int_check(char *str);
int is_just_space(int c);
t_long_array  *set_atol_array(char *args);
t_int_array   *valid_input_check(char *args);
t_int_array   *int_array_from_long(t_long_array *long_array);
void  check_size(long *array, int len);
void  check_duplicates(long *array, int len);
void  size_and_duplic_check(t_long_array *long_array);
char  *implode_args(char **args, int argcount);
void  set_stack_a(t_stacks *container, t_int_array *int_array);
t_stack *initialise_stack(void);
t_stacks *init_stacks(t_int_array *int_array);

#endif
