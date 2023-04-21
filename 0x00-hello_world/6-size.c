#include <stdio.h>
/**
*main - A program that prints the size of various types on the computer it is compiled and run on.
*Return:0(Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char : %1u byte(s),"\n(unsigned long)sizeof(a));
printf("size of int : %1u byte(s),"\n(unsigned long)sizeof(b));
printf("size of long int : %1u byte(s),"\n(unsigned long)sizeof(c));
printf("size of long long int : %1u byte(s),"\n(unsigned long)sizeof(d));
printf("size of float : %1u byte(s),"\n(unsigned long)sizeof(f));
return (0);
}
