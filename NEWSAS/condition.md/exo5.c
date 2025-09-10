#include<stdio.h>
int main (){
    long M,j,h,m,s;
    int NA;
    printf("Veuillez saisir un nombre d'annee:");
    scanf("%d",&NA);
    M=NA*12;
    j=NA*365;
    h=NA*8760;
    m=NA*525600;
    s=NA*31536000;
    printf("Mois=%ld\n",M);
    printf("Jour=%ld\n",j);
    printf("Heure=%ld\n",h);
    printf("Minute=%ld\n",m);
    printf("Seconde=%ld\n",s);
    return 0;
}