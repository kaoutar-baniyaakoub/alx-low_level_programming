#include "main.h"
/**
 * _islower-check if character is alphabetic character.
 * @c:character to check if it is lowercase uppercase or else.
 * Return:1-if lowercase or uppercase,0-if not.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
retutn (0);
}
}
