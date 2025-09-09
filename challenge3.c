#include<stdio.h>
int main ()
{
    float km,yards;
    printf("Veuillez saisir la distance en km:");
    scanf("%f",&km);
    yards = km * 1093.61;
    printf("la valeur de distance en yards est :%.2f ",yards);
    return 0;
}