#include<stdio.h>
int main ()
{   int n,IN; 
    int a,b,c,d,e,f;
    printf("Veuillez saisir un nombre de 6 chiffres :");
    scanf("%d",&n);
    f=n%10;
    e=(n/10)%10;
    d=(n/100)%10;
    c=(n/1000)%10;
    b=(n/10000)%10;
    a=(n/100000)%10;
    IN=(f*100000+e*10000+d*1000+c*100+b*10+a*1);
    printf("l'inverse de nombre est : %d",IN);
    return 0; 
}