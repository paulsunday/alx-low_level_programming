TASK 0;

Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));


TASK 1

Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));

where size is the size of the array

and action is a pointer to the function you need to use

TASK 2
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));

where size is the number of elements in the array array

cmp is a pointer to the function to be used to compare values

int_index returns the index of the first element for which the cmp function does not return 0

If no element matches, return -1

If size <= 0, return -1
TASK 3
This file should contain your main function only.

You are not allowed to code any other function than main in this file

You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function

You have to use atoi to convert arguments to int

You are not allowed to use any kind of loop

You are allowed to use a maximum of 3 if statements

TASK 4
Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes

Output format:

the opcodes should be printed in hexadecimal, lowercase

each opcode is two char long

listing ends with a new line

see example

You are allowed to use printf and atoi

You have to use atoi to convert the argument to an int

If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1

If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2

You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.