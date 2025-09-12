#include<stdio.h>
#include<math.h>
int main (){
     int s,i,n,k;
     printf("Veuillez saisir un nombre n :");
     scanf("%d",&n);
    s=0;
    k=1;
    
    for (i=1;i<=n;i++){
      s=s+pow(k,2);
      k=k+2;
    }
    
    printf("S=%d",s);
    return 0;
}