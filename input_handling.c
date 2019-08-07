/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbolton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:26:50 by rbolton           #+#    #+#             */
/*   Updated: 2019/08/07 19:08:39 by rbolton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** GENERALISED STEPS FOR BOTH CHECKER AND PUSHSWAP:
**
** Step 1: Convert single string to 2D-array.
** - DO IN EACH MAIN - not separate function call
** Step 2: Check 2D array for anything not valid as a candidate for ATOI.
** - THIS IS A SEPARATE FUNCTION CALL USING THE 2D CHAR ARRAY.
** ONLY MOVES ON TO NEXT STEP IF SUCCESSFUL.
** Step 3: Create Stack A. - FUNCTION CALL USING "VALID" 2D CHAR
** ARRAY BASED ON OUTCOME OF STEP 1. ONLY MOVES ON TO NEXT STEP IF SUCCESSFUL.
** Step 4: Check each element of Stack A is a valid int.
** - FUNCTION CALL USING CREATED STACK A. ONLY MOVES ON TO
** NEXT STEP IF SUCCESSFUL.
** Step 5: Check each element of Stack A is unique.
** - FUNCTION CALL USING CREATED STACK A. ONLY MOVES ON TO
** NEXT STEP IF SUCCESSFUL.
** Step 6: Check if stack is sorted.
** - FUNCTION CALL USING CREATED STACK A. ONLY MOVES ON TO
** NEXT STEP IF SUCCESSFUL.
** Step 7: Normalise the Stack. - FUNCTION CALL USING ACTUAL
** STACK A WHICH GIVES THE EXPECTED POSITION OF EACH ELEMENT.
*/
