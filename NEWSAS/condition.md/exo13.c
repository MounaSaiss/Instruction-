#include<stdio.h>
int main (){
    float x1,x2,y1,y2,x,y;
    printf ("Veuillez saisir les cordonees de point A:");
    scanf("%f%f",&x1,&y1);
    printf ("Veuillez saisir les cordonees de point B:");
    scanf("%f%f",&x1,&y1);
    printf("Veuillez saisir cordonnes de point qui tu veut verfier:");
    scanf("%f%f",&x,&y);
    if (x1<x2 || y1<y2){
        if(x>=x1 && x<=x2 || y>=y1 && y<=y2)
        printf("la points c de cordonnes %.1f et %.1f appartient au segment",x,y);
        else 
        printf("la point n'appartient pas au segment");
    }
    
    else  {
        if(x>=x2 && x<=x1 || y>=y2 && y<=y1)
        printf("la points c de cordonnes %.1f et %.1f appartient au segment",x,y);
        else 
        printf("la point n'appartient pas au segment"); 
    }
   
    return 0;

}