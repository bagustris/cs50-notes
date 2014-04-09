/* capitalize.c
 * capitalize the input text
 * 09/28/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("please input text: ");
  string s=GetString();

  //capitilize
  for (int i = 0, n=strlen(s); i < n; i++)
  {
    if (s[i] >='a' && s[i] <='z')
    {
      printf("%c", s[i] - ('a' - 'A'));
    }
    else
    {
      printf("%c",s[i]);
    }
  }
  printf("\n");
}
