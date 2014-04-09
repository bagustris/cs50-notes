/* if-positive.c
 * demonstrate the false of using if condition for loop
 * 10/03/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf ("Tolong masukkan bilangan positive: ");
  int n = GetInt();
  if (n <=0 )
  {
    printf ("Itu bukan positive coy.... !\n");
  }
}
