#include "main.h"
/**
 * times_table - prints the by 9 table.
 *
 * Description: prints all the nine table
 * Return: Always(0) Success
 */
void times_table(void)
{
int res, init, last_value;
int k, step = 0;
last_value = 9;
do {
for (init = 0; init <= last_value; init++)
{
res = init * step;
if (res <= 9)
{
_putchar(res + '0');
}
else
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
if (init == 9)
{
break;
}
else
{
_putchar(',');
_putchar(' ');

}

}
_putchar('\n');
step += 1;
k += 1;

} while (k <= 9);
}
