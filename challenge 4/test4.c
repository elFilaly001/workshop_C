#include <stdio.h>

int main(){

    int a,b,c,d;

    printf("inserer votre premier nombre :");
    scanf("%d", &a);
    printf("inserer votre deuxieme nombre :");
    scanf("%d", &b);
    printf("inserer votre troisieme nombre :");
    scanf("%d", &c);
    printf("inserer votre quatrieme nombre :");
    scanf("%d", &d);

    printf("\n");
    printf("la somme est %d \n", a+b+c+d);
    printf("la moyenne est %d", (a+b+c+d)/4 );

}
