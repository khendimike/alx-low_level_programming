#include "main.h"

/**
*print_last_digit - prints tha last digit of a number
*@number: holds the number
*Return: return the ldigit
*/

int print_last_digit(int number)
{
int ldigit = number % 10;

if (ldigit < 0)
{
ldigit *= -1;
}
_putchar(ldigit + '0');
return (ldigit);
}
