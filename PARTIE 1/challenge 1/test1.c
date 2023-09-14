#include <stdio.h>

int main(){
    char nom[10], prenom[10], sexe[10], tel[10];
    int age;
    printf("entrez votre nom : ");
    scanf("%s" ,&nom);
    printf("entrez votre prenom : ");
    scanf("%s" ,&prenom);
    printf("entrez votre age :");
    scanf("%d" ,&age);
    printf("entrez votre sexe : ");
    scanf("%s" ,&sexe);
    printf("entrez votre tel : ");
    scanf("%s" ,&tel);
    printf("\n");

    printf("Bonjour, vous etes Mr %s %s \nvous avez %d \nvous etes '%s' \nvotre tel est %s" ,nom,prenom,age,sexe,tel);
    return 0;
    }
