/* argv-2.c
 * 
 * 10/12/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])
{
  //print arguments
  for (int i = 0; i < argc; i++)
  {
    for (int j = 0, n = strlen(argv[i]); j<n; j++)
    {
      printf("%c\n", argv[i][j]);
    }
  }
}
