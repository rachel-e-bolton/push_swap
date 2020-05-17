/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 21:16:18 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 22:46:28 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void	set_best_move(t_moves *moves, int a_moves, int b_moves, int total_moves)
{
	moves->stack_a_moves = a_moves;
	moves->stack_b_moves = b_moves;
	moves->total_moves = total_moves;
}

void	moves_init(t_moves *moves, t_stack *stack_a, t_stack *stack_b)
{
	moves->max_a = max_index(stack_a);
	moves->len_a = stack_height(stack_a);
	moves->total_moves = INT_MAX;
	moves->len_b = stack_height(stack_b);
	moves->position = 0;
}

int		moves_count(t_stack *stack, int index)
{
	int count;
	int next;
	int len;
	int max;
	int min;

	count = 0;
	len = stack_height(stack);
	max = max_index(stack);
	min = min_index(stack);
	next = next_lowest_index(stack, index);
	stack = stack->next;
	if (index < min)
		next = max;
	while (stack)
	{
		if (stack->index == next)
			break ;
		count++;
		stack = stack->next;
	}
	if (count > len / 2)
		return (count - len);
	else
		return (count);
}

void	moves_calc(t_moves *moves, int *a_moves, int *b_moves, int *total)
{
	*a_moves = (moves->position > moves->len_a / 2) ? moves->position - moves->len_a : moves->position;
	if (*b_moves > moves->len_b / 2)
		*b_moves = *b_moves - moves->len_b;
	if (*b_moves == *a_moves)
		*total = (*b_moves > 0) ? *b_moves : *b_moves * -1;
	else if (*a_moves > 0 && *b_moves > 0)
		*total = (*a_moves > *b_moves ? *a_moves : *b_moves);
	else if (*a_moves < 0 && *b_moves < 0)
		*total = (*a_moves < *b_moves) ? *a_moves * -1 : *b_moves * -1;
	else
		*total = (*a_moves - *b_moves > 0) ? *a_moves - *b_moves : (*a_moves - *b_moves) * -1;
}