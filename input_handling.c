/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:55:10 by rbolton           #+#    #+#             */
/*   Updated: 2019/08/14 18:49:51 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:26:50 by rbolton           #+#    #+#             */
/*   Updated: 2019/08/14 17:37:22 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0
#include "./libft/libft.h"
#include "checker_push_swap.h"

/*
** GENERALISED STEPS FOR BOTH CHECKER AND PUSHSWAP:
**
** Step 1: Convert single string to 2D-array.
** - DO IN EACH MAIN - not separate function call
** Step 2: Check 2D array for anything not valid as a candidate for ATOI.
** - THIS IS A SEPARATE FUNCTION CALL USING THE 2D CHAR ARRAY.
** ONLY MOVES ON TO NEXT STEP IF SUCCESSFUL.
** Step 3: Check for all ints.
** Step 4: Check for uniqueness.
** Step 5: Set 2D array to Stack A.
** Step 6: Check if stack is sorted.
** - FUNCTION CALL USING CREATED STACK A. ONLY MOVES ON TO
** NEXT STEP IF SUCCESSFUL.
** Step 7: Normalise the Stack. - FUNCTION CALL USING ACTUAL
** STACK A WHICH GIVES THE EXPECTED POSITION OF EACH ELEMENT.
*/

/*
** STEP 2: Check for valid ATOI candidates.
** Pseudocode: 
** While my parent array exists,
** If an entry in the array starts with a '-' then check
** If the next char is a digit.
** If it is a digit, increment the index because this
** could be a valid candidate, else return (-1) because it isn't:
** Why? Anything other than a digit after a minus is invalid.
** If we make it through these ifs, we should be looking at a digit.
** Keep checking for digits and while there are still digits,
** increment the index.
** The while loop ends when we no longer have
** a digit at the current index.
** The only time valid input will not have a digit at this point
** is if we are at the end of the string.
** So we check, if we are not at the end of the string,
** then return (-1) as this is not a valid atoi candidate.
** Else return (1), we have a full list of valid candidates.
**
** At this point we have eliminated any input that is not able
** to be represented as an int.
*/

int		atoi_check(char **array)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (array[i] != NULL)
	{
		if (array[i][0] == '-')
			((ft_isdigit(array[i][1])) == TRUE ? k++ : return (FALSE));
		while ((ft_isdigit(array[i][k])) == TRUE)
		{
			k++;
		}
		if (array[i][k] != '\0')
			return (FALSE);
		i++;
	}
	return (TRUE);
}

/*
** STEP 3: Check that all elements are ints. 
** NB: THIS NEEEEEDS ATOL. IF THE OUTPUT OF 
** FT_ATOL is BIGGER OR SMALLER THAN MAX/MIN INT, then REJECT.
*/

int		all_int(char **array)
{
	int	i;
	while (array[i] != NULL) //Check if the atol of each element is between int_min and int_max
}

/*
** STEP 5: Create Stack A
** 
** This step uses push, which is defined in the operations files.
** It takes the 2D array of Valid atoi candidates and starting at
** the end of the array, it pushes them all onto the stack.
*/

t_stack	*create_stack(char **array)
{
	t_stack *new;
	int		i;
	int		data;

	new = NULL;
	i = 0;
	if (!array)
		return (new);
	i = sizeof(array);
	while (i--)
	{
		data = ft_atoi(array[i]);
		new = push(new, data);
	}
	return (new);
}


