/* hello-2.c
 * demonstrate hello word from user input
 * 09/24/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  printf("state ur name:");
  string name= GetString();
  printf("hello,%s\n", name);
}
