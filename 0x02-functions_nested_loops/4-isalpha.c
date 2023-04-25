#include "main.h"
/**
 * _islower-check if character is alphabetic character.
 * @c:the character in ASCII code.
 * Return:1 for alphabets,0 fro the rest.
 */
int _isalpha(int c)
{
int c;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
retutn (0);
}
}
