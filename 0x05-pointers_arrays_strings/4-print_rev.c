#include "main.h"

/**
*print_rev - reverses a string
*@s: pointer parameter variable
*/

void print_rev(char *s)
{
int p, k;

while (*(s + p) != 0)
{
p++;
}
for (k = p - 1; k >= 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}
