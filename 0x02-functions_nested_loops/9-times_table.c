#include "main.h"
/**
 * times_table - function that prints 9 times tables of number starting from 0
 * @void: no argument
 */
void times_table(void)
{
int i, j, k;
for (int i = 0;i <= 9;i++){
for (int j = 0; j <= 9;j++){
k = i * j;
if (j == 0)
{
_putchar(k + '0');
}
else if (k <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
}
_putchar('\n');
}
}
