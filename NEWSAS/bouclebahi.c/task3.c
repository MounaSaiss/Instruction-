#include<stdio.h>
#include<math.h>
int main (){
    int n,s,i;
    printf("Veuillez saisir un nombre n :");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++){
        s=s+pow(10,i);
    }
    printf("s=%d",s);
    return 0;
}