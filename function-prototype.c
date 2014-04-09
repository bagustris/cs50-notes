 /* function-0.c
 * demonstrate the use function
 * 10/02/2013 
 * bagustris, bagustris@yahoo.com
 */


#include<cs50.h>
#include<stdio.h>


//ini adalah prototype
void CetakNama(string nama);

int main(void)
{
  printf("Namamu adalah: ");
  string s = GetString();
  CetakNama(s);
}


void CetakNama(string nama)
{
  printf("halo, %s\n", nama);
}
