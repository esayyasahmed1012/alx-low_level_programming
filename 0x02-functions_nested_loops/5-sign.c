#include "main.h"
/**
 * pint_sign: will print sign according to the if statment
 * @c:takes character
 * Return: 1 if th enumber is positve, 0 if zero and negative if it's negative
 */
int print_sign()
int i;
if (i > 0)
{
_putchar('+');
return (1);
}
else if (i == 0)
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
