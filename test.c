#include <stdio.h> 

/*
 * A fixed version of the previous program
 */

int main()
{
  int num;
  int i;
  
  printf ("How many time do you want the loop to run? ");
  num = getchar();
  
  num -= '0';
  
  for (i = 0; i < num; i++)
    puts ("Looping");
  
  printf ("The loop ran %d times\n", num);
  
  return(0);
}
