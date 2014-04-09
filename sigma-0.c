/* sigma-0.c
 * more with recursion
 * 10/21/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>
#include <cs50.h>

int sigma(int m);
int main(void)
{
  int n;
  do
  {
    printf("Positive integer:");
    n = GetInt();
  }
  while (n < 1);

  //recall the symbol \sigma for sumation
  int answer = sigma(n);
  printf("%i\n", answer);
}

int sigma(int m)
{
  if (m < 1)
  {
    return 0;
  }

  int sum = 0;
  for (int i = 1; i <= m; i++)
  {
    sum += 1;
  }
  return sum;
}
