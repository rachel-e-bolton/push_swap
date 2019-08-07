/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push_swap.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:27:15 by rbolton           #+#    #+#             */
/*   Updated: 2019/08/07 18:47:36 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_PUSH_SWAP_H
# define CHECKER_PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "./libft/libft.h"

typedef struct		s_stack
{
	int				to_sort;
	int				position;
	struct s_stack	*next;
}					t_stack;

#endif
