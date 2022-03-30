#include "main.h"
/**
 * factorial - returns the length of a string
 * @n: the number to work on
 * Return: factorial of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
