#include <stdio.h>

int main() {
    int r, i, j;

    printf("Entrez un nombre: ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= r - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
