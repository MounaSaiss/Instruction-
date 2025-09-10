#include<stdio.h>
int main()
{
    char C ;
    printf("Veuillez saisir un charactere:");
    scanf("%c",&C);
    if (C<='Z' && C>='A')
       printf("le caractere est Majiscule");
    else 
       printf("le caractere est Miniscule");
    return 0;
}