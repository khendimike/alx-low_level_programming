#include "main.h"

/**
*main - check the code
*
*print_alphabet - print alphabet
*Return: Always 0
*/

int main(void)
{

print_alphabet();

char ch = 'a';

void print_alphabet(void)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
return (0);
}


