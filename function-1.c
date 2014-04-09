/* function-1.c
 * program untuk meminta input int positive
 * 10/08/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <stdio.h>

int GetPositiveInt(void);

int main(void)
{
  int n = GetPositiveInt();
  printf("Thanks for the %i!\n",n);
}

int GetPositiveInt(void)
{
  int n;
  do
  {
    printf("Give me a positive integer: ");
    n = GetInt();
  }
  while (n <= 0);
  return n;
}
