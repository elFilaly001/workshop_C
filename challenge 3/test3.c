#include <stdio.h>

int main (){
    float a,b;

    printf("inserer votre premier nombre :");
    scanf("%f", &a);
    printf("inserer votre deuxieme nombre :");
    scanf("%f", &b);

    printf("\n");
    printf("addition : %f \n", a+b);
    printf("soustraction : %f \n" , a-b);
    printf("multiplication : %f \n" , a*b);
    printf("division : %f \n" , a/b);


    return 0;
}
