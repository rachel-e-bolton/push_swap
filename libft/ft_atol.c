/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:48:54 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/16 20:21:48 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "libft.h"

long int	ft_atol(char const *str)
{
	int			i;
	long int	ans;
	int			sign;
  int    valid;

	i = 0;
	ans = 0;
	sign = 1;
  valid = FALSE;
	while (ft_isspace(str[i]) == TRUE)
		i++;
	(((str[i] == '-') && (ft_isdigit(str[i + 1]) == TRUE)) ?
		((sign = -1)) && i++ : i);
	(((str[i] == '+') && (ft_isdigit(str[i + 1]) == TRUE)) ?
		((sign = 1) && i++) : i);
	while (ft_isdigit(str[i]) == TRUE)
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
    valid = TRUE;
	}
  if (valid == TRUE)
	  return (ans * sign);
  else
    exit(1);
}

/*
** 469762049 is the overflow for long max
*/
