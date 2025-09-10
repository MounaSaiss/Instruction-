#include<stdio.h>
int main ()
{   float MP; /*MP est le montant de pret et PM paiment mensuelle*/
    float PR1,PR2,PR3; /*sont le montatnt apres chaque paiment mensuel*/
    const float TI=0.005; /*Taux interet par mois */
    printf("Veuillez saisir le montant du pret :");
    scanf("%f",&MP);
    PR1=(MP-386.66)*TI+(MP-386.66);
    PR2=(PR1-386.66)*TI+(PR1-386.66);
    PR3=(PR2-386.66)*TI+(PR2-386.66);
    printf("Solde restant après le premier paiement :%.2f\n",PR1);
    printf("Solde restant après le premier Deuxieme :%.2f\n",PR2);
    printf("Solde restant après le premier Troiseme :%.2f\n",PR3);
    return 0;
}