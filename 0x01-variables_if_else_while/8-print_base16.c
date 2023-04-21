#include<stdio.h>
/**
*main-program that prints all the numbers of base 16 in lowercase
*Return:0(Success)
*/
int main(void)
{
int n;
int m = 97;
for (n = 0; n < 9; n++)
{
printf("%d", n);
while (m <= 102)
{
putchar(m);
}
}
putchar('\n');
return (0);
}
