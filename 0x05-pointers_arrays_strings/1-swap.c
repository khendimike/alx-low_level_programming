#include "main.h"

/**
*swap_int - swaps two integer numbers
*@a: pointer variable to the first number
*@b: pointer variable to the second number
*/

void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
