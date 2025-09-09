#include<stdio.h>
int main(){
float MD,MT;
printf("Veuillez saisir un montant en dollars et en cents :");
scanf("%f",&MD);
MT=MD+((MD*5)/100);
printf("le montant avec le taxe  ajoute :%.2f",MT);
    return 0 ;
}