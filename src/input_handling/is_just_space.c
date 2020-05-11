/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_just_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:16:43 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 20:42:05 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "../checker_push_swap.h"

int	is_just_space(int c)
{
	return ((c == 32));
}