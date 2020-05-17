/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_swap.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:41 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 23:13:26 by rbolton          ###   ########.fr       */
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
  long  *array;
  int   len;
  bool  v_flag;
}               t_long_array;

typedef struct  s_int_array
{
  int *array;
  int len;
  bool v_flag;
}               t_int_array;

typedef struct  s_stack
{
  int             value;
  int             index;
  bool            is_master;
  struct s_stack  *prev;
  struct s_stack  *next;
}               t_stack;

typedef struct  s_stacks
{
  bool        is_checker;
  bool        v_flag;
  int         max_stack_len;
  t_stack     *stack_a_head;
  t_stack     *stack_b_head;
}               t_stacks;

typedef struct  s_moves
{
  t_stack   *node;
  int       stack_a_moves;
  int       stack_b_moves;
  int       total_moves;
  int       len_a;
  int       len_b;
  int       position;
  int       max_a;
}               t_moves;

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
t_stack *initialise_stack();
t_stacks *init_stacks(t_int_array *int_array, bool is_checker);
t_stack *ft_new_node(int val);
bool  add_node(t_stack *stack_a, int val);
void  print_stack_status(t_stacks *container);
void  print_line(char *a, char *b);
void  ft_swap(t_stack *stack);
void  ft_push(t_stack *sender, t_stack *receiver);
void  ft_rotate(t_stack *stack);
void  ft_rev_rotate(t_stack *stack);
void  pa(t_stacks *container);
void  pb(t_stacks *container);
void  rra(t_stacks *container);
void  rrb(t_stacks *container);
void  rrr(t_stacks *container);
void  ra(t_stacks *container);
void  rb(t_stacks *container);
void  rr(t_stacks *container);
void  sa(t_stacks *container);
void  sb(t_stacks *container);
void  ss(t_stacks *container);
bool  do_operation(t_stacks *container, char *str);
bool  get_operations(t_stacks *container);
bool  is_sorted_index(t_stacks *container);
bool  is_sorted_value(t_stacks *container);
int run_checker(t_stacks *container);
void  normalise_stack(t_stack *stack, int stack_len);
void  run_push_swap(t_stacks *container);
void  sort_two(t_stacks *container);
void  sort_three(t_stacks *container, char stack_to_sort);
void  reverse_sort_three(t_stacks *container, char stack_to_sort);
bool  is_sorted_single(t_stack *stack);
bool  is_sorted_single_rev(t_stack *stack);
int stack_height(t_stack *stack);
void  pb_smallest(t_stacks  *container);
void  sort_five(t_stacks *container);
int from_start(t_stack *start, t_stack *marker);
int to_end(t_stack *start, t_stack *marker);
void  sort_large(t_stacks *container, t_moves *moves, int max_a);
void  set_up(t_stacks *container, int max_a);
void  find_best_move(t_moves *moves, t_stack *stack_a, t_stack *stack_b);
void	set_best_move(t_moves *move, int a_moves, int b_moves, int total_moves);
void	moves_init(t_moves *move, t_stack *stack_a, t_stack *stack_b);
int		moves_count(t_stack *stack, int index);
void	moves_calc(t_moves *moves, int *a_moves, int *b_moves, int *total);
int		max_index(t_stack *stack);
int		min_index(t_stack *stack);
int		end_index(t_stack *stack);
int		next_lowest_index(t_stack *stack, int index);
void	multi_rotate_both(t_stacks *container, t_moves *moves, int direction);
void	multi_rotate_a(t_stacks *container, t_moves *moves);
void	multi_rotate_b(t_stacks *container, t_moves *moves);
void	largest_to_top(t_stacks *container);
void	push_back_to_a(t_stacks *container);

#endif
