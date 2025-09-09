#include<stdio.h>
int main(){
    int n;
    int a,b,c,d;
    int NI;
    printf("Veuillez saisir un nombre entier de quatre chifre :");
    scanf("%d",&n);
d = n % 10;
c = (n / 10) % 10;
b = (n / 100) % 10;
a = (n / 1000) % 10; 
NI=(d*1000+c*100+b*10+a*1);
   printf(" L'inverse de nombre est :%d",NI);
    return 0;
}