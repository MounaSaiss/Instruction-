#include<stdio.h>
int main (){
float c,tu,tc,fb,ft;
printf("Veuillez saisir Consommation d'electricite (en kWh) :");
scanf("%f",&c);
printf("Veuillez saisir Type d'utilisateur (1 pour residentiel, 2 pour commercial) : ");
scanf("%f",&tu);
printf("Veuillez saisir Type de contrat (0 pour standard, 1 pour reduit) :");
scanf("%f",&tc);
if (tu==1){
    if(tc==0){
       fb=c*0.20;
       printf ("facture de base = %f",fb);
    }
    else {
        fb=c*0.15;
        printf ("facture de base  =%f",fb);
    }
} 
else if (tu==2){
    if(tc==0){
       fb=c*0.30;
       printf ("facture de base  =%f",fb);
    }
    else {
        fb=c*0.25;
       printf ("facture de base  =%f",fb);
    }
} 
else 
 printf ("Cas introuvable");

if (c>500){
    ft=fb+(fb*0.10);
    printf("la facture totale = %f",ft);
}
else {
    ft=fb;
    printf("la facture totale = %f",ft);
}
    return 0 ;
}