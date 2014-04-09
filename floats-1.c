/* floats.c
 * demonstrate the float file type
 * 09/26/2013 
 * bagustris, bagustris@yahoo.com
 */

#include <stdio.h>

int main(void)
{
  //this is buggy, it will not shown 0.1 but 0.0
  //float f=1/10;
  float f=1.0/10.0;    //turn the int to float 
  // alternative: float f = (float) 1 / (float) 10;
  printf("%.1f\n",f);
}
