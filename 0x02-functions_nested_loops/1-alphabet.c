#include "main.h"

/**
*main - check the code
*
*Return: Always 0
*/

int main(void)
{

print_alphabet();

_putchar('\n');

return (0);
}

/**
 *print_alphabet - prints lowercase alphabet
 */

void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}

}
