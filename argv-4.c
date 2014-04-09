/* argv-2m.c
 * demoed the use of null terminator
 * 10/12/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
  for (int i=0; i < argc; i++)
  {
    for (int j = 0; argv[i][j] != '\0'; j++)
    {
        printf("%c\n", argv[i][j]);
    } 
  }
}
