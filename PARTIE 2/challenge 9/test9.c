#include <stdio.h>


int main (){
    char a;

    printf("entre votre lettre : ");
    scanf("%c",&a);

    if(a>=65 && a<=90){
        printf("votre lettre est on majuscule");
    }else if (a>=97 && a<=122){
        printf("votre lettre est on miniscule");
    }else{
        printf("c'est une pas unr lettre");
    }
}
