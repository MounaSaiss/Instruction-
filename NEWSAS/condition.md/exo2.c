#include<stdio.h>
int main ()
{   char C;
   
    printf("Veuillez saisir un caractere :");
    scanf("%c",&C);
    switch(C){
		case 'a':printf("Voyelle");
		       break ;
        case 'i':printf("Voyelle");
		       break ;
		case 'e':printf("Voyelle");
		       break ;
		case 'o':printf("Voyelle");
		       break ;
		case 'y':printf("Voyelle");
		       break ;
		case 'u':printf("Voyelle");
		       break ;
		default :printf("pas un Voyelle");
		       break; }
return 0;
}