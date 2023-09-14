#include <stdio.h>

int main (){

    float F,C;


    printf("entrer la tomperature on F :");
    scanf ("%f" ,&F);


    C = (F-32)/1.8;


    printf("votre temperature en C est : %.2f \n",C);


    if(C<0){
        printf("tres froid");
    }else if (C>=0 && C<20){
        printf("froid");
    } else if (C>=20 && C<30){
        printf("chaud");
    }else if (C>30){
        printf("tres chaud");
    }

}
