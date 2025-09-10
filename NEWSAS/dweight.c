/* Computes the dimensional weight of a 12"x10"x8" box */
#include<stdio.h>
int main ()
{
  int volume;
  const int height=8;
  const int length = 12;
  const int width = 10;
 
 volume = height * length * width;

 
 printf("Dimensions: %dx%dx%d\n", length, width, height);
 printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n",(volume + 165) / 166 );
    return 0;
}