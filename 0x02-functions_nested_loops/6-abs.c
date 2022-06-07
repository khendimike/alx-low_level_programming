#include "main.h"

/**
*_abs - prints absolute value
*
*@value: holds the absolute value
*
*Return: returns the absolute value
*/

int _abs(int value)
{
if (value < 0)
{
return ((value) * (-1));
}
else
{
return (value);
}
}
