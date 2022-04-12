#include <stdio.h>

/**
 * main - the main function of the code
 * Return: always 0 (success)
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return 0;
}
void print_alphabet()
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
putchar('\n');
}
}
