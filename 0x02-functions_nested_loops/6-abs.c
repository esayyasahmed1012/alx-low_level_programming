#include "main.h"
/**
 * _abs - is used to return absolute value values
 * Return: positive value for both positive and negative numbers; and 0 for zero
 */
int _abs(int i){
if (i < 0)
{
i = (-1*i);
return (i);
}
else if (i > 0)
{
return (i);
}
else
{
return (0);
}
}
