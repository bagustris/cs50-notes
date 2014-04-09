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
  // get line of text
  printf("give me a sting: \n"); 
  string s = GetString();

  //print string, one character per line
  
    for (int i = 0; i < strlen(s);  i++)
    // for (int i = 0; n = strlen(s); i < n; i++) 
    {
      printf("%c\n",s[i]);
    }
  
}
