#include <stdlib.h>
  
#include <stdio.h>

#include <time.h>



/**

 * main - this function print using put

 *

 * Return: Always 0 (Success)

 */



int main(void)
  
{
  
  int n,ld;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  
ld = n % 10;
  
  if (ld < 0)
    
    {
      
      ld=ld*-1;
      
    }
  
  if (ld > 5)
    
    {
      
      /* if condition is true then print the following */
      
      printf("Last digit of %d",n);
      
      printf(" is %d",ld);
      
      printf(" and is greater than 5\n");
      
    }
  
  else  if (ld == 0)    
{
printf("Last digit of %d",n);
printf("is %d",ld);
printf(" and is 0\n");
}
else if (ld < 5)    
{
printf("Last digit of %d",n);
printf(" is %d",ld);
printf(" and is less than than 5\n");
}
return (0);
}
