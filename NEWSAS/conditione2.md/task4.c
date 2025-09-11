#include<stdio.h>
int main (){
    int sp,a,r;
    float spn;
    printf("Veuillez saisr Score de performance (de 0 à 100) :");
    scanf("%d",&sp);
    printf("Veuillez saisir l'Anciennete (en années) : ");
    scanf("%d",&a);
    printf("Veuillez saisir Recompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus):");
    scanf("%d",&r);
    if(r==0){
        if(sp>= 90 && a>= 5)
        printf("Excellente");
        else if (sp>= 75 && a>= 3)
        printf("Bonne");
        else if (sp>= 50 && a < 3 )
        printf("Satisfaisante");
        else 
        printf("Insuffisante");
    }
    else if (r==1){
    spn=sp+(sp*0.1);
        if(spn>= 90 && a>= 5)
        printf("Excellente");
        else if (spn>= 75 && a>= 3)
        printf("Bonne");
        else if (spn>= 50 && a < 3 )
        printf("Satisfaisante");
        else 
        printf("Insuffisante");
    }
    else {
    spn=sp+(sp*0.2);
        if(spn>= 90 && a>= 5)
        printf("Excellente");
        else if (spn>= 75 && a>= 3)
        printf("Bonne");
        else if (spn>= 50 && a < 3 )
        printf("Satisfaisante");
        else 
        printf("Insuffisante");
    }
    return 0;
}