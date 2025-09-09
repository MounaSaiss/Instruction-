#include<stdio.h>
#include<math.h>
int main ()
{ 
    float x,S;
    printf("Veuillez saisir nombre x :");
    scanf("%f",&x);
    S=(((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    printf("la solution est : %.2f",S);
    return 0;
}