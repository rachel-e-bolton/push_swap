/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_swap.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:51:41 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 20:03:08 by rbolton          ###   ########.fr       */
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
# include "../libft/libft.h"

typedef struct  s_int_array
{
  int *array;
  int len;
}               t_int_array;

void not_int_check(char *str);
int	is_just_space(int c);
t_int_array *set_atol_array(char *args);

#endif
