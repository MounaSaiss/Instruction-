#include<stdio.h>
int main (){
    float n,i,s;
    printf("Veuillez saisir le nombre n :");
    scanf("%f",&n);
    s=0;
    for (i=1;i<=n;i++){
        s=s+(1/i);
    }
    printf ("%.2f",s);
    return 0; 
}