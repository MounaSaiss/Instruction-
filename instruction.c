#include <stdio.h>
int main(){
    const int AA=2025;
    int AN , age;
    printf("Veuillez saisir votre date de naissance: ");
    scanf("%d",&AN);
    age=AA-AN;
    printf("l'age est :%d",age);
    return 0;
}