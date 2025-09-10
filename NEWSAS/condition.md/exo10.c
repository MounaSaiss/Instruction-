#include<stdio.h>
int main(){
    int j,m,a;
    printf("Veuillez saisir la date :");
    scanf("%d/%d/%d",&j,&m,&a);
    
printf("la date est : %d-", j);

switch (m) {
    case 1:  printf("Janvier");   break;
    case 2:  printf("Février");   break;
    case 3:  printf("Mars");      break;
    case 4:  printf("Avril");     break;
    case 5:  printf("Mai");       break;
    case 6:  printf("Juin");      break;
    case 7:  printf("Juillet");   break;
    case 8:  printf("Août");      break;
    case 9:  printf("Septembre"); break;
    case 10: printf("Octobre");   break;
    case 11: printf("Novembre");  break;
    case 12: printf("Décembre");  break;
    default: printf("Mois invalide"); break;
}

printf("-%d", a);

            
    return 0;
}