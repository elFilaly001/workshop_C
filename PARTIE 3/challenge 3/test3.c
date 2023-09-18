#include <stdio.h>
#include <stdbool.h>


int main() {
    int n;
    bool q;


    printf("Entrez un entier : ");
    scanf("%d", &n);

    while ( ((n%n)==0) && ((n%1)==0) && ((n%2)!=0) && ((n%3)!=0)){

        printf("le nombre est premier ");
        break;
    }

}
