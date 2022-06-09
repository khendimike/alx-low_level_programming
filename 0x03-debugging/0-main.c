#include "main.h"

/**
*positive_or_negative - tests positive or negative
*
*@n: holds the number
*/
void positive_or_negative(int n)
{
if (n > 0)
{

printf("%d is positive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
}
