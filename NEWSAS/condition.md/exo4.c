#include<stdio.h>
#include<math.h>
int main ()
{   int a,b,c;
    float delta,x,x1,x2;
    printf("Veuillez saisir les varibles a,b et c:");
    scanf("%d %d %d",&a,&b,&c);
    delta=pow(b,2)-(4*a*c);
    if (delta<0)
       printf ("l'equation n'a pas de solution ");
    else if (delta==0){
        x=-b/(2*a);
        printf("la solution de l'equation est :x=%f",x);
    }
    else {
        x1=-b-sqrt(delta)/2*a;
        x2=-b+sqrt(delta)/2*a;
        printf("les solutions de l'equation sont:");
        printf("x1=%f\n",x1);
        printf("x2=%f\n",x2);
    }
    return 0 ;
}