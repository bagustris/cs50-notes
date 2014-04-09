/* adder.c
 * demonstrate the use of GetInt, from CS50 Library
 * 09/25/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  //ask for user input
  printf("Give me an integer:");
  int x = GetInt();
  printf("Give me another integer:");
  int y = GetInt();

  //do math
  printf("So, you give me %d and %d, the sum of both are = %d!\n", x, y, x+y);
}
