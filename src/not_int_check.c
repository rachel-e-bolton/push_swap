/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_int_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:07:05 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/10 17:05:48 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FAIL 2
#define PASS 1
#include "./checker_push_swap.h"
#include "../libft/libft.h"

void not_int_check(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (!(is_just_space(str[i]) || ft_isdigit(str[i])))
    {
      ft_putstr_fd("Error\n", 2);
      exit(1);
    }
    ++i;
  }
}