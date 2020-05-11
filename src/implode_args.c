/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implode_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 19:23:05 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/11 19:43:29 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./checker_push_swap.h"

char  *implode_args(char **args, int argcount)
{
  int i = 1;
  char *imploded = NULL;
  char *tmp1 = NULL;
  char *tmp2 = NULL;
  
  if (args && argcount)
  {
    imploded = ft_strjoin(args[i], " ");
    ++i;
    while (i < argcount)
    {
      tmp1 = ft_strjoin(args[i], " ");
      tmp2 = &(*imploded);
      imploded = ft_strjoin(imploded, tmp1);
      free(tmp1);
      free(tmp2);
      ++i;
    }  
  }
  return(imploded);
}