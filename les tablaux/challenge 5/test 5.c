#include<stdio.h>
#include <string.h>

int main(){

    char nom[10];

    printf("entre votre nom : ");
    scanf("%s", &nom);

    int length=0 ;

    while (nom[length]!='\0'){
        length ++;
    }

    printf("%d", length);
}
