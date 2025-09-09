#include<stdio.h>
int main (){
float N1,N2,N3;
float MP; /*MP signifier le moyenne pondéré*/
printf("Veuillez saisir les 3 nombres :");
scanf("%f%f%f",&N1,&N2,&N3);
MP=((N1*2)+(N2*3)+(N3*5))/(2+3+5);
printf("le moyenne pondérer est :%f",MP);
    return 0;
}