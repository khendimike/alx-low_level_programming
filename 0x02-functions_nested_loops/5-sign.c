#include "main.h"

/**
*print_sign - prints sign
*
*@n: holds the value
*
*Return: returns 1 or 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (0);
}
}
