#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* main.c */

/**

 * main - Entry point

 * 

 * Description: 'the program's description'

 * 

 * Return: Always 0 (Success)

 */
int main(void)
{
/*this main function verify if numb is positive negitve or zero */
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
/* if condition is true then print the following */
printf("%d is positive\n", n);
}
else  if (n < 0)
{
/* if condition is false then print the following */
printf("%d is negative\n", n);
}
else if (n == 0)
{
/* if condition is false then print the following */
printf("%d is zero\n", n);
}
return (0);
}
