#include<stdio.h>
int main (){
    int a,b;
    float S,Su,P,D;
    printf("Veuillez saisir la valeur de a:");
    scanf("%d",&a);
    printf("Veuillez sasir la valeur de b :");
    scanf("%d",&b);
    S=a+b;
    Su=a-b;
    P=a*b;
    D=a/b;
    printf("S=%.2f\n",S);
    printf("Su=%.2f\n",Su);
    printf("P=%.2f\n",P);
    printf("D=%.2f\n",D);
    return 0 ;
}