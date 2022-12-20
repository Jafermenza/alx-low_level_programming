#include "main.h"
#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
 *main:Entry point 
 *main:world jdd
 *Short Description:documenation betty style for these f
 *Description:verify if the number is 0 or negative or positive
 *Return: Always 0 (Success)
 */

void positive_or_negative (int n)
{
  
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
 return;
}
