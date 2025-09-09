#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c,MG;
    
    printf("Veuillez saisir  la valeur de a:");
    scanf("%f",&a);
    printf("Veuillez saisir  la valeur de b:");
    scanf("%f",&b);
    printf("Veuillez saisir  la valeur de c:");
    scanf("%f",&c);
    MG = pow((a * b * c),(1.0/3.0));
    printf("le moyenne geometrique est :%f",MG);
    return 0;
}