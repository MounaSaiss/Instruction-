#include<stdio.h>
#include<math.h>
int main ()
{   int MD;
    int a,b,c,d;
    int r1,r2,r3;
    printf ("Veuiler saisir un montant en dollars americains :");
    scanf("%d",&MD);
    a=MD/20; /*valeur en 20 dolars */
    r1=MD%20; 
    b=r1/10; /*valeurs en 10 dollars*/
    r2=r1%10;
    c=r2/5; /*valeur en 5dollars */
    r3=r2%5;
    d=r3/1; /*valeur en 1dollars */
    printf("Billets de 20$ est : %d\n",a);
    printf("Billets de 10$ est : %d\n",b);
    printf("Billets de 5$ est : %d\n",c);
    printf("Billets de 1$ est : %d\n",d);
    return 0;
}