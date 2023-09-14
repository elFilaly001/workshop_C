#include <stdio.h>

int main(){

    char a;

    printf("entrer votre lettre : ");
    scanf("%c" ,&a);

    switch(a){
        case 'a':
            printf("cette lettre est une voylle");
            break;
        case 'e':
            printf("cette lettre est une voylle");
            break;
        case 'i':
            printf("cette lettre est une voylle");
            break;
        case 'u':
            printf("cette lettre est une voylle");
            break;
        case 'o':
            printf("cette lettre est une voylle");
            break;
        case 'y':
            printf("cette lettre est une voylle");
            break;
        default:
            printf("cette lettre n'est pas une voyelle");
    }
}
