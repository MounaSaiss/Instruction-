#include<stdio.h>
int main (){
    int f,i,n;
    printf("Veuillez saisir un nombre n:");
    scanf("%d",&n);
    while(n<=0){
        printf("Veuillez saisir un nombre n:");
        scanf("%d",&n);
    }
    f=1;
    for (i=1;i<=n;i++){
        f=f*i;
    }
    printf("f=%d",f);
    return 0 ;
}