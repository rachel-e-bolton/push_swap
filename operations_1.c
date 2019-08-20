/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 13:19:50 by rbolton           #+#    #+#             */
/*   Updated: 2019/08/20 12:06:33 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "checker_push_swap.h"

t_node	*push(t_node *head, int data)
{
	t_node	*tmp;

	tmp = (t_node *)malloc(1 * sizeof(tmp));
	if (tmp == NULL)
		exit (0); //This condition should be check, might need an error message like "Error, could not allocate memory. Heap overflow."
	tmp->data = data;
	tmp->next = head;
	head = tmp;
	return (head);
}

t_node	*pop(t_node *head, int *element) //the int *element pointer is a pointer to the data we wil be popping with this pop() call. We remove it from the stack, but we store it in memory so that we can use it for comparison or pushing later. 
{
	t_node *tmp;
	int		data;

	tmp = head;
	*element = head->data; //stores whatever is in data at the address of element.
	head = head->next; //head pointer now points to next node in the stack, ie. first node has been popped;
	free(tmp);
	tmp = NULL;
	return (head);
}

int		is_empty(t_node *head)
{
	return (head == NULL ? TRUE : FALSE);
}
