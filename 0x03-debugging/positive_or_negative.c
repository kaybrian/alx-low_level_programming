#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - main block
 * Return: 0
 */
int positive_or_negative(int i)
{
srand(time(0));
i = 0;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return (0);
}
