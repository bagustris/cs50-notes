/* ages.c
 * demoed the use of array
 * 10/10/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //determine number of people in the room
  int n;
  do
  {
    printf("number of people in room: ");
    n = GetInt ();
  }
  while(n < 1);
  //declare array in which to store everyone's age

  int ages[n];
  for (int i=0; i < n; i++)
  {
    printf("Age of person #%i: ", i+1);
    ages[i]= GetInt();
  }

  //report everyone's age a year hence
  printf("Time passes....\n");
  for (int i = 0; i < n; i++)
  {
    printf("A year from now, person #%i will be %i years old.\n", i+1, ages[i]+1);
  }
}
