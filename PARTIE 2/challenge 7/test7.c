#include <stdio.h>

int main(){

    char a;

    printf("entre votre lettre : ");
    scanf("%c",&a);



    if(a>=65 && a<=90){
        printf("majuscule");
    }else{
        printf("miniscule");

    }

}
