#include<stdio.h>
int main ()
{
    int R,SC,DP;
    printf("Veuillez saisir revenu annuel:");
    scanf("%d",&R);
    printf("Veuillez saisir le score de credit :");
    scanf("%d",&SC);
    printf("Veuillez saisr Durée de pret:");
    scanf("%d",&DP);
    if (R>= 30000 && SC >= 700 &&  DP <= 10 )
       printf ("Eligible");
    else if (R>= 30000 && SC>= 650 && DP<= 15)
       printf("Eligible avec conditions");
    else if (R<30000  || SC<650 || DP > 15  )
       printf("Non Eligible");
    else 
       printf("pas de reponse ");
    return 0; 
}