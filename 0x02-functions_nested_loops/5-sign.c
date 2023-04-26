#include "main.h"
/**
*print_sign-prints the sign of a number
*@n: a number
*Return:1 if its positive , -1 if its negative and 0 if it is zero
*/
int print_sign(int n)
{
if (n >= 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}