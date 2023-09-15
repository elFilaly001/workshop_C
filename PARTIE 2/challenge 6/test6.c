#include <stdio.h>

int main (){

    int a;

    printf("entrer votre nombre ");
    scanf("%d", &a);

    if(a<0){

        printf("votre nombre est negative");

    }else if (a>0){

        printf("votre nombre est positive");

    }else{

        printf("votre nombre egale a zero");
    }


}
