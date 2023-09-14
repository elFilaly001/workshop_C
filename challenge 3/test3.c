#include <stdio.h>

int main (){
    int a,b;

    printf("inserer votre premier nombre :");
    scanf("%d", &a);
    printf("inserer votre deuxieme nombre :");
    scanf("%d", &b);

    printf("\n");
    printf("addition : %d \n", a+b);
    printf("soustraction : %d \n" , a-b);
    printf("multiplication : %d \n" , a*b);
    printf("division : %d \n" , a/b);
    printf("modulo : %d \n" , a%b);

    return 0;
}
