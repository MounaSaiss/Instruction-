#include<stdio.h>
int main()
{
    float K,C;
    printf("Veuillez saisir la température en Celsius:");
    scanf("%f",&C);
    K = C + 273.15;
    printf("la Température en Kelvin est :%.2f",K);
    return 0;
}