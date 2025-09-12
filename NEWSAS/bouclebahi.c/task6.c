#include<stdio.h>
int main (){
    int n,i;
    printf("Veuillez saisir un nombre n non nul :");
    scanf("%d",&n);
    while(n<=0){
        printf("Veuillez saisir un nombre n non nul :");
        scanf("%d",&n); 
    }
    for(i=1;i<=n;i++){
     if (n%i==0)
        printf(" %d",i);
    }
       
    return 0;
}                                                