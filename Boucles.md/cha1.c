#include<stdio.h>
int main (){
int X,P,i;
printf("Veuillez saisir un nombre :");
scanf("%d",&X);
while (X<0 || X>10){
printf("Veuillez saisir un nombre :");
scanf("%d",&X);
}

for (i=0;i<=10;i++){
    printf("%d*%d= %d\n",X,i,X*i);
}
    return 0;
}