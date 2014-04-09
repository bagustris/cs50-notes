/* function-0.c
 * demonstrate the use function
 * 10/02/2013 
 * bagustris, bagustris@yahoo.com
 */


#include<cs50.h>
#include<stdio.h>


//fungsi untuk menampikan/cetak nama
void CetakNama(string nama)
{
  printf("halo, %s\n", nama);
}

int main(void)
{
  printf("Namamu adalah: ");
  string s = GetString();
  CetakNama(s);
}
