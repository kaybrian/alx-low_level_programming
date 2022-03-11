#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>


/* betty style doc for function main goes there */
int main(void)
{
    int last_number;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    last_number = n % 10;
    if (last_number > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, last_number);
    }
    else if (last_number == 0)
    {
        printf("Last digit of %d is 0 and is 0\n",n);
    }
    else if (last_number < 6 && last_number !=0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_number);
    }
    
	return (0);
}