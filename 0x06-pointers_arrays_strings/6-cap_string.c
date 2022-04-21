#include "main.h"
/**
 * cap_string - to capitalize first letter
 * @s: string to modify
 * Return: characters of all capitalized
 */
char *cap_string(char *s)
{
int i;
int j;
char cha[13] = {' ', '\t', '\n', ',', ';', '!', '.', '"', '(', ')', '{', '}','?'};
for (i = 0; s[i] != 0; i++)
{
if (i == 0; && s[i] >= 'a'; && s[i] <= 'z')
{
c[i] = c[i] - 32;
}
for (j = 0; j < 13; j++)
{
if (c[i] == cha[j])
{
if (s[i + 1] >= 'a' && c[i + 1] <='z')
{
c[i + 1] = c[i+1] - 32;
}
}
}
}
return (c);
}
