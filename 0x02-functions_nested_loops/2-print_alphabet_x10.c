#include "main.h"
/**
*print_alphabet_x10-prints_10_times_the_alphabet _n_lowercase
*Return:0(Success)
*/
void print_alphabet_x10(void)
{
int n;
int m;
for (n = 1; n <= 10; n++)
{
for (m = 97; m <= 122; m++)
{
_putchar(m);
}
_putchar('\n');
}
}
