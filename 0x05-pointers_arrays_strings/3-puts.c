#include "main.h"

/**
*_puts - prints a string
*@str: pointer variable parameter
*/

void _puts(char *str)
{
int i, j;

while (*str != '\0')
{
i++;
}

for (j = 0; j < i; j++)
{
_putchar(str[j]);
}

_putchar('\n');
}
