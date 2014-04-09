/* dowhile-hello10x.c
 * print hello, world 10 times using do while
 * 10/07/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(void)
{
  int i=0;
  do {
    printf("hello, world\n");
    i++;
  }
  while (i < 0);
}
