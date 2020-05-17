/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <rbolton@student.wethinkcode.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:33:19 by rbolton           #+#    #+#             */
/*   Updated: 2020/05/18 00:42:19 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Credit to my good friend, GWASSERF for this random number script */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./libft/libft.h"

void	print_array(int *arr, int size)
{
	int j;

	j = 0;
	while (j < size)
	{
		ft_putnbr(arr[j]);
		j++;
		if (j != size)
			ft_putchar(' ');
	}
	write(1, "\n", 1);
}

int		is_unique(int suggested, int *array, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (suggested == array[i])
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int *array;
	int current;
	int max;
	int i;

	srand(time(NULL));
	if (ac == 2)
	{
		max = ft_atoi(av[1]);
		array = (int *)malloc(sizeof(int) * max);
		i = 0;
		while (i < max)
		{
			current = rand() % (max * 2);
      ((rand() % 3) == 0) ? current = current * -1 : current;
			if (is_unique(current, array, i))
			{
				array[i] = current;
				i++;
			}
		}
		print_array(array, max);
	}
	else
		write(1, "Usage: ./randint 100\n", 64);
	return (0);
}