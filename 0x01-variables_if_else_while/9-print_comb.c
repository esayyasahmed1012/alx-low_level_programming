#include <stdio.h>

/**
 * main - main function
 * Return: always 0(success)
 */
int main(void)
{
int number;
for (number = 48; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
