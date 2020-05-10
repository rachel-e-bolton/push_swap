/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_swap.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachelbolton <rachelbolton@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:27:15 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 15:42:37 by rachelbolto      ###   ########.fr       */
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
# include "./libft/libft.h"

typedef struct		s_node
{
	int				to_sort;
	int				position;
	struct s_stack	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*head;
	t_node			*tail;
}					t_stack;

int					atoi_check(char **array);
int					all_int(char **array);
t_node				*create_stack(char *array);
t_node				*push(t_node *head, int data);
t_node				*pop(t_node *head, int *element); //to use this meaningfully: when calling pop(), ensure that a pointer to int exists. That pointer will contain the popped data after the function call which can then be used to either compare or push() to another stack.
int					is_empty(t_stack *head);


#endif
