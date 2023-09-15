#include <stdio.h>


int main (){
    int a,b;
    printf("entre un nombre ");
    scanf("%d",&a);
    printf("*********MENU**********\n");
    printf("1-convertir au Mois\n ");
    printf("2-convertir au jour\n ");
    printf("3-convertir au heur \n");
    printf("4-convertir au minute \n");
    printf("5-convertir au second\n ");
    scanf("%d",&b);
    switch(b){
        case 1:
            printf ("%d", a*12);
            break;
        case 2:
            printf("%d",a*12*365);
            break;
        case 3:
            printf("%d",a*12*365*24);
            break;
        case 4:
            printf("%d",a*12*365*24*60);
            break;
        case 5:
            printf("%d",a*12*365*24*60*60);
            break;
    }

}
