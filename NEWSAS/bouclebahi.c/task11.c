#include<stdio.h>
int main (){
int N,S,i;
printf("Veuillez saisir un nombre :");
scanf("%d",&N); 
i=1;
do{
    S=N+i;
    printf(" %d",S); 
    i++;
}while(i<=10);

       
    return 0;
}