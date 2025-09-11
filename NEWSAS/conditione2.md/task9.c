#include<stdio.h>
int main (){
    float sb,nh,tp,th,ps,p,st;
    printf("Veuillez saisir Salaire de base (en euros):");
    scanf("%f",&sb);
    printf("Veuillez saisir Nombre d'heures supplementaires:");
    scanf("%f",&nh);
    printf("Veuillez saisir Type de poste (1 pour junior, 2 pour senior):");
    scanf("%f",&tp);
    th=sb/160;
    ps=nh*th*1.5;
    if(tp==1){
        p=sb*0.1;
    }
    else {
        p=sb*0.2;
    }
    st=sb+ps+p;
    printf("le salaire totale =%f",st);
    return 0;
}