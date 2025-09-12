#include<stdio.h>
int main (){
int nbr,kech,aga,i;
kech=1000000;
aga=500000;
nbr=0;

while(kech>aga){
    kech=kech+50000;
    aga=aga*1.08;
    nbr++;
}

printf(" aga depasse marakech dans l'annes:%d",nbr);

    return 0;
}
