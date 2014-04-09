/* do-while.c
 * demontrate loop do-while
 * 10/01/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#include <cs50.h>

int n;      //global variabel is used

int main(void)
{
  //int n;  // variable can be declared here, scope is in main
  do
  {
  printf("I demand that you give me a positive integer: ");
  n = GetInt();     //variable also can be declader here, int n=GetInt()
  } 
  while (n <=0);
  printf ("Yes, you inserted something right!\n");
}
