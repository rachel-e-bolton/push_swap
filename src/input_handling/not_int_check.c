/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_int_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:07:05 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 20:42:27 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_push_swap.h"
#include "../../libft/libft.h"

void not_int_check(char *str)
{
  int i;

  i = 0;
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