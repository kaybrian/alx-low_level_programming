#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>


/* betty style doc for function main goes there */
int main(void)
{
int ch;

for(ch='a';ch<='z';ch++)
{
if(ch=='q' || ch=='e'){
    continue;
}
putchar(ch);
    
}
putchar('\n');
}