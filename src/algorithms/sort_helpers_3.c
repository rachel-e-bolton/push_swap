/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 21:16:29 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/17 22:35:35 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"

int		min_index(t_stack *stack)
{
	int min;

	stack = stack->next;
	if (!stack)
		return (0);
	min = stack->index;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

int		max_index(t_stack *stack)
{
	int max;

	if (stack)
		max = stack->index;
	else
		return (0);
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int		end_index(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack->index);
}

int		next_lowest_index(t_stack *stack, int index)
{
	int i;

	i = 0;
	stack = stack->next;
	while (stack)
	{
		if (stack->index > i && stack->index < index)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}