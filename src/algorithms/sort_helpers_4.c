/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 21:16:34 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 23:59:38 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

void	multi_rotate_both(t_stacks *container, t_moves *moves, int direction)
{
	if (direction > 0)
	{
		rr(container);
		moves->stack_a_moves--;
		moves->stack_b_moves--;
	}
	else
	{
		rrr(container);
    moves->stack_a_moves++;
		moves->stack_b_moves++;
	}
}

void	multi_rotate_a(t_stacks *container, t_moves *moves)
{
	if (moves->stack_a_moves > 0)
	{
		ra(container);
		moves->stack_a_moves--;
	}
	else
	{
		rra(container);
		moves->stack_a_moves++;
	}
}



void	multi_rotate_b(t_stacks *container, t_moves *moves)
{
	if (moves->stack_b_moves > 0)
	{
		rb(container);
		moves->stack_b_moves--;
	}
	else
	{
		rrb(container);
		moves->stack_b_moves++;
	}
}

void	largest_to_top(t_stacks *container)
{
	t_stack *largest;
	t_stack *cursor;

	largest = container->stack_b_head->next;
	cursor = container->stack_b_head->next;
	while (cursor)
	{
		if (cursor->index > largest->index)
			largest = cursor;
		cursor = cursor->next;
	}
  cursor = container->stack_b_head;
	while (cursor->next != largest)
	{
		if (from_start(cursor, largest) < to_end(cursor, largest))
			rb(container);
		else
			rrb(container);
	}
	pa(container);
}

void	push_back_to_a(t_stacks *container)
{
	t_stack *head_b;

	head_b = container->stack_b_head;
	while (head_b->next)
		largest_to_top(container);
}