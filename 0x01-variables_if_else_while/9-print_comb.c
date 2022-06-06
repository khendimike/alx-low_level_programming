#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*/

int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
puchar(',');
putchar(' ');

num++;
}

putchar('\n');

return (0);
}
