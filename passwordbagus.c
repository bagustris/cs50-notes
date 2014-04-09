/* passwordbagus.c
 * demonstrate password check using if
 * 09/26/2013 
 * bagustris, bagustris@yahoo.com
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("masukkan password anda: \n");
  string x = GetString();

  string y = "bagus";
  if (x == y)
  {
    printf("password anda benar\n");
  }
  else
  {
    printf("password anda salah\n");
  }
}
