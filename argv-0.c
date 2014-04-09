/* argv-1.c
 * demoed the use of command-line argument
 * 10/12/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
  if (argc < 2)
  {
    printf("Not enough argument\n");
  }
  int x = atoi(argv[1]);
  printf("%d\n",x);
}
