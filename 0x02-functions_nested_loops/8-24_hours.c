#include "main.h"

/**
*jack_bauer - prints minutes in a day
*
*Return: 0
*/

void jack_bauer(void)
{
int i, x, y, z = 0;

while (i <= 2)
{
while (x <= 9)
{
while (y <= 5)
{
while (z <= 9)
{
if (i == 2 && x > 3)
{
break;
}
_putchar(i + '0');
_putchar(x + '0');
_putchar(':');
_putchar(y + '0');
_putchar(z + '0');
_putchar('\n');
z++;
}
y++;
}
x++;
}
i++;
}
}
