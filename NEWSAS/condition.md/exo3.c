#include<stdio.h>
int main ()
{
    int a,b;
    int S;
    printf("Veuillez saisir un entier a :");
    scanf("%d",&a);
    printf("Veuillez saisir un  entier b :");
    scanf("%d",&b);
    S=0;
    S=a+b;
    if (a==b){
        S=S*3;
        printf("le somme est :%d",S); 
    }
    else 
      printf ("la somme est : %d",S);
      
    return 0;
}