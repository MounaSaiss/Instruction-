#include<stdio.h>
int main (){
   char nom[50],prenom[50],sexe[10],mail[100];
   int age ;
   printf("Veuillez saisire your nom:");
   scanf("%49s",&nom);
   printf("Veuillez saisire your prénom:");
   scanf("%49s",&prenom);
   printf("Veuillez saisire your age:");
   scanf("%d",&age);
   printf("Veuillez saisire your sexe:");
   scanf("%9s",&sexe);
   printf("Veuillez saisire your email:");
   scanf("%99s",&mail);
printf("Vos informations personnelles sont : %s %s %d %s %s\n",
           nom, prenom, age, sexe, mail);
return 0;
}