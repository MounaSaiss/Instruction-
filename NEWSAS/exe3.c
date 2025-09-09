#include<stdio.h>
#include<math.h>
int main (){
    float r;
    const float PI=3.141592;
    float V;
    printf("Veuillez saisir la valeur de rayon :");
    scanf("%f",&r);
    V=(4.0f/3.0f)*PI*pow(r,3);
    printf("le volume est :%f",V);
    return 0;
}