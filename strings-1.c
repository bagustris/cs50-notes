/* string.c
 * stings as arrays of chars 
 * the use of strlen
 * 09/28/2013 
 * bagustris, bagustris@yahoo.com
 */


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  string s = GetString();

 if (s != NULL)
 {
    for (int i = 0; i < strlen(s);  i++)
    //for (int i = 0; n = strlen(s); i < n; i++) 
    {
      printf("%c\n",s[i]);
    }
 } 
}
