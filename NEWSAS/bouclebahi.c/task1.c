#include<stdio.h>
int main (){
    int N,i,S;
    printf(" Veuillez saisir un nombre N:");
    scanf("%d",&N);
    
    for (i=1;i<=10;i++){
      S=N+i;
      printf(" %d",S);
    }

    return 0;
}