#include <stdio.h>

int main (){

    int a,b;

    printf("entrez votre 1er nombre : ");
    scanf ("%d",&a);
    printf("entrez votre 2eme nombre : ");
    scanf ("%d",&b);

    if(a==b){

        printf("%d", 3*(a+b));

    }else{

        printf("%d", a+b);
    }

    return 0;
}
