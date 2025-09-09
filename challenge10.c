#include<stdio.h>
#include<math.h>
int main (){
    const float pi=3.14159265358979;
    float r,V ;
    printf("Veuiller saisir le rayon :");
    scanf("%f",&r);
    V = (4.0/3.0) * pi * (pow(r,3));
    printf("le Volume de sphere est : %.2f",V);
    return 0;
}