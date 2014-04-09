/* debug.c
 * debugging 
 * 10/12/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <stdio.h>
#include <cs50.h>

void foo(int i)
{
  printf("%i\n", i);
}

int main(void)
{
  printf ("Enter an Integer: ");
  int i = GetInt();

  printf("Outside first while loop");
  while (i < 10)
  {
    printf("First while loop: %i\n",i);
    i--;
  }

  printf("Outside second while loop");
  while( i != 0)
  {
    printf("Second while loop: %i\n", i);
    i = i - 3;
  }

  foo(i);
}
