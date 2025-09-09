#include<stdio.h>
#include<math.h>
int main ()
{
    float x1,y1,z1,x2,y2,z2;
    float D;
    printf("Veuillez saisire les cordones de point a:");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Veuillez saisire les cordones de point a:");
    scanf("%f%f%f",&x2,&y2,&z2);
    D = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf ("la distance entre les deux points est : %.2f",D);

    return 0;
}