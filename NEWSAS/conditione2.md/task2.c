#include<stdio.h>
int main(){
    float P,age,tv,na,p;
    float P1,P2,P3,Pt;
    printf("Veuillez saisir l'age de condicteur :");
    scanf("%f",&age);
    printf("Type de voiture (1 sportive, 2 utilitaire, 3 familiale):");
    scanf("%f",&tv);
    printf("Veuillez saisir Nombre d'accidents :");
    scanf("%f",&na);
    printf("veuillez saisir le prime :");
    scanf("%f",&P);
    /*age*/
    if (age<25){
        P1=P*1.5;
        printf("P1=%f\n",P1); }

    else if  (age>=25 && age<=65){
        P1=P;
        printf("P1=%f\n",P1); }
    else {
        P1=P*1.2;
        printf("P1=%f\n",P1); } 

    /*type voiture*/

    if (tv==1){
        P2=P1*2;
        printf("P2=%f\n",P2); }

    else if  (tv==2){
        P2=P1*1.2;
        printf("P2=%f\n",P2); }
    else {
        P2=P1*1.1;
        printf("P2=%f\n",P2); }

    /*nombre acccident*/
    
    if (na>1){
        P3=P2*1.3;
        printf("P3=%f\n",P3);  }
    else {
        P3=P2;
         printf("P3=%f\n",P3); }
    
Pt=P3;
printf (" la prime d'assurance d'une voiture est :%f\n",Pt);
     
    return 0;
}