#include<stdio.h>
int main (){
    int U,i,n;
    printf("Veillez saisir un nombre n:");
    scanf("%d",&n);
    U=6;
    for (i=1;i<=n;i++){
        U=(4*U)+10;
    }
    printf("U=%d",U);
    return 0;
}