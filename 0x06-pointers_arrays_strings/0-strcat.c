#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: a pointer to a char that will be changed
 * @src: a pointer to a char that will also change
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
c++;
for (i = 0; i< n && src[i] != '\0'; i++)
{
dest[c + i] = src[i];
dest[c + i] = '\0';
return (dest);
