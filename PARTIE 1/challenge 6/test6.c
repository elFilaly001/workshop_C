#include <stdio.h>
#include <math.h>

int main(){

    double r;
    printf("entrez le rayon de votre cercle :");
    scanf("%lf", &r);

    printf("circonférence de votre cercle = %.2lf" , 2*M_PI*r);

    return 0;

}
