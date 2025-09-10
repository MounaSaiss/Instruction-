#include<stdio.h>
int main ()
{   int N;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&N);
    if(N%2==1)
       printf("%d nombre est impair ",N);
    else
       printf("%d nombre est pair",N);

    return 0;
}