#include<stdio.h>
int main (){
    float M;
    printf ("Veuillez saisir le Moyenne :");
    scanf("%f",&M);
    if (M<10)
        printf("recale");
    else if (M>=10 && M<12)
        printf("passable");
    else if (M>=12 && M<14)
        printf("assez bien ");
    else if (M>=14 && M<16)
        printf("bien");
    else
        printf("trées bien");
    return 0;
}