#include<stdio.h>
int main (){
 float A;
 printf ("Veuillez saisir un nombre :");
 scanf("%f",&A);
 if (A<0)
    printf("le nombre est negatif ");
else if (A>0)
    printf("le nombre est positif ");
else 
    printf("le nombre est nul");
 return 0;    
}