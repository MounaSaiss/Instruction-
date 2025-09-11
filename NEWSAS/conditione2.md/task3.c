#include<stdio.h>
int main (){
    int NCA,NC,ST,jr;
    printf ("Veuillez saisir Nombre total de jours de congés accordés :");
    scanf ("%d",&NCA);
    printf("Veuillez saisir Nombre de jours de congés utilisés :");
    scanf("%d",&NC);
    printf("Veuillez saisir Statut de l'employé (0 pour temps partiel, 1 pour temps plein)");
    scanf("%d",&ST);
    if (ST==1){
        jr=NCA-NC;
        printf ("les jours restants est :%d",jr);
    }
    else if (ST==0){
        jr=(NCA/2)-NC;
        printf ("les jours restants est :%d",jr);
    }
    else if(NC>NCA){
        printf("vous avez depasser les jours de congé");
    }
    else {
        printf("le programme ne repond pas ");
    }
    return 0;
}