#include "main.h"

/**
*_isalpha - checks for alphabeta
*
*@c: requires alphabet
*
*Return: 1 or 0
*/

int _isalpha(int c)
{
if ((c >= 65) && (c <= 122))
return (1);

return (0);
}
