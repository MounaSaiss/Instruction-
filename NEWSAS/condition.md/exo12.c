#include<stdio.h>
int main (){
int h1,m1,s1,h2,m2,s2;
printf("Veuillez saisir le premier temps :");
scanf("%d:%d:%d",&h1,&m1,&s1);
printf("Veuillez saisir le Deuxieme temps :");
scanf("%d:%d:%d",&h2,&m2,&s2);
if(h1<h2)
   printf("Le premier instant vient avant le deuxième");
else if (h1>h2)
   printf("Le deuxieme instant vient avant le premier");
else {
    if(m1<m2)
   printf("Le premier instant vient avant le deuxieme");
    else if (m1>m2)
   printf("Le deuxième instant vient avant le premier");
   else {
        if(s1<s2)
        printf("Le premier instant vient avant le deuxième");
        else if (s1>s2)
        printf("Le deuxième instant vient avant le premier");
        else 
        printf("Il s'agit du meme instant.");
   }
}
    return 0;
}