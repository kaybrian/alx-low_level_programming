#include<stdio.h>
/**
 * _isdigit - check if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
