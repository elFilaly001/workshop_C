#include <stdio.h>
#include <stdbool.h>


int main() {
    int n;
    bool q;


    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        q=false;
    }
    for (int i=2; i*i<= n ; i++) {
        if (n % i == 0) {
            q = false;
            printf("%d , %d \n" , i , i*i);
        }
    }



    if (q = true) {
        printf("%d est un nombre premier.\n", n);
    } else {
        printf("%d n'est pas un nombre premier.\n", n);
    }

    return 0;
}
