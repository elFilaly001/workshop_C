#include <stdio.h>
#include <math.h>

int main (){
    int x1,x2,y1,y2,d;

    printf("entrer X1 :");
    scanf("%d" , &x1);
    printf("entrer Y1 :");
    scanf("%d" , &y1);
    printf("entrer X2 :");
    scanf("%d" , &x2);
    printf("entrer Y2 :");
    scanf("%d" , &y2);

    d= sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf("la distence est %d" , d);
    return 0;
}
