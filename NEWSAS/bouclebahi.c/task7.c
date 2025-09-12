#include<stdio.h>
int main(){
    int age,s,i;
    printf("Veuillez saisir l'age de amal :");
    scanf("%d",&age);
    s=0;
    for (i=1;i<=age;i++){
        s=s+500+(i*3);
    }
    printf("la somme de amal qu compte dans ce age est :%d",s);
    
    return 0;
}