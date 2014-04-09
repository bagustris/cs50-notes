/* capitalize-1.c
 * demoed the use of cytpe
 * 10/10/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  string s = GetString();

  for (int i=0, n = strlen(s); i < n; i++)
  {
      printf ("%c", toupper(s[i]));
  }
 printf("\n"); 
}
