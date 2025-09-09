#include<stdio.h>
int main (){
    float T;
    printf ("Veuillez saisir la température :");
    scanf ("%f",&T);
    if (T<0)
       printf(" l'état de l'eau est solide ");
    else if (T>=0 & T<100)
       printf(" l'état de l'eau est liquide ");
    else 
       printf(" l'état de l'eau Gaz");
    return 0; 
}