#include<stdio.h>
int main (){
int age,hm,tc;
printf("Veuillez saisir votr age :");
scanf("%d",&age);
printf("Veuillez saisir l'Historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur):");
scanf("%d",&hm);
if(age < 30 )
printf("plan de base");
else if ( age >= 30  && hm == 0)
printf("Plan de base");
else if (age>= 30 && hm>=1 ){
    if (hm==2)
    printf("Plan etendu+couverture supplémentaire");
    else 
    printf("Plan etendu");
} 
else 
printf ("cas introuvable");  
    return 0;
}