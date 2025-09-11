#include<stdio.h>
int main (){
    int B,D,np;
    printf("Veuillez saisir le budget en euros:");
    scanf("%d",&B);
    printf("Veuillez saisir Destination (1 pour plage, 2 pour montagne, 3 pour ville ):");
    scanf("%d",&D);
    printf("Veillez saisir nombre de personne:");
    scanf("%d",&np);
    /*les recommendation*/
    if (B>= 1000)
    printf("Voyage haut de gamme\n");
    else if (B>=500 && B<1000)
    printf("Voyage moyen\n");
    else 
    printf("Voyage économique\n");
    /*Les destinations recommandées*/
    if(D==1){
        if (B>= 1000 && np>2)
        printf ("la plage bon destination pour vous ");
        else 
        printf("ce n'est pas bon destination");
    }
    if(D==2){
        if (B>= 500 && np<=2)
        printf (" Montagne bon destination pour vous ");
        else 
        printf("ce n'est pas bon destination");
    }
    if(D==3){    
        printf ("la ville  bon destination pour vous ");   
    }
    return 0; 

}