#include<stdio.h>
#include<math.h>
int main ()
{
    const int r=10;
    const float PI=3.141592;
    float V;
    V=(4.0f/3.0f)*PI*pow(r,3);
    printf("le volume est :%f",V);
    return 0;
}