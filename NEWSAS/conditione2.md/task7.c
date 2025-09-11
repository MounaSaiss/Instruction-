#include<stdio.h>
int main(){
    float RA,SF,De,RI,I;
    printf ("Veuillez saisir Revenu annuel (en euros) :");
    scanf("%f",&RA);
    printf("Veuillez saisir Statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille):");
    scanf("%f",&SF);
    
    if (SF==1){
        De=1000;
    }
    else if (SF==2){
        De=2000;
    }
    else if (SF=3){
        De=3000;
    }
    else 
       printf ("resultat introuvable");
    
    RI=RA-De;

    if(RA<=20000){
        I=RI*0.05;
        printf("impôts a payer est :%f",I);
    }
    else if(RA>20000  && RA<=50000){
        I=RI*0.10;
        printf("impôts a payer est :%f",I);
    }
    else {
        I=RI*0.20;
        printf("impôts a payer est :%f",I);
    }

    return 0;
}