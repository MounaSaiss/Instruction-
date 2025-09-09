#include<stdio.h>
#include<math.h>
int main ()
{
    float x,S;
    printf("Veuillez saisir nombre x :");
    scanf("%f",&x);
    S=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;
    printf("la solution est : %.2f",S);
    return 0; 
}