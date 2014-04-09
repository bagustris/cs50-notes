/* condition-0.c
 * demonstrate a subtle bug in C and how to fix it
 * 09/26/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //ask user for integer
  printf("I'd like an integer please: ");
  int n= GetInt();

  //analyze the user input
  if (n>0)
  {
    printf ("You picked a positive number!\n");
  }
  else if (n == 0)
  {
    printf("You picked zero!\n");
  }
  else
  {
    printf("You picked a negative number!\n");
  }
}
