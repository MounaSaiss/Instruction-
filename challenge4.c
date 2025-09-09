#include<stdio.h>
int main ()
{
    float kh,ms;
    printf("Veuillez saisir la vitesse en kilomètres par heure :");
    scanf("%f",&kh);
    ms = kh * 0.27778 ;
    printf(" la vitesse en mètres par seconde (m/s) est : %.2f",ms);
    return 0;
}