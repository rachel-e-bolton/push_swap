/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_int_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:07:05 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 22:04:18 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"
#include "../../libft/libft.h"

void not_int_check(char *str)
{
  int i;

  i = 0;
  if ((str[0] == '-') && (str[1] == 'v'))
    i = 2;
  while (str[i] != '\0')
  {
    if ((is_just_space(str[i]) || ((str[i] == '-') && (ft_isdigit(str[i + 1]))) || ft_isdigit(str[i])))
    {
      ++i;
    }
    else
    {
      ft_putstr_fd("Error\n", 2);
      exit(1);
    }
  }
}