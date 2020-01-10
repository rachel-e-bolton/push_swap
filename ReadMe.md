# ABOUT THE PROJECT:

The PushSwap project involves the creation of two programs: Checker and PushSwap.

The Checker program takes an integer stack and reads sorting instructions from the STDIN, it executes the instructions and determines whether or not the instructions given have successfully sorted the stack.

The PushSwap program takes an integer stack and uses various algorithms to determine the best set of sorting instructions (sort the stack in the least number of operations). The recommended set of sort instructions is returned to the STDOUT where it can be redirected to Checker. 

# AVAILABLE OPERATIONS:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.

# SCRIPTS FOR RANDOM NUMBER GENERATION:

Still to populate
