#include "main.h"
/**
 * print_square - prints hashtags in square shape
 * @size: limit
 * Return: void
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
-putchar('\n');
}
}
