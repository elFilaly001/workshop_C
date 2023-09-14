#include <stdio.h>
#include <math.h>

int main (){

    int a,b,c,d;
    float x1,x2,x3;
    printf("entrer votre 1er nombre : ");
    scanf ("%d",&a);
    printf("entrer votre 2eme nombre : ");
    scanf ("%d",&b);
    printf("entrer votre 3eme nombre : ");
    scanf ("%d",&c);

    d=pow(b,2)-(4*a*c);

    if(d>0){
        printf(" delta = %d \n", d);
        x1=((-b)-(sqrt(d)))/2*a;
        x2=((-b)+(sqrt(d)))/2*a;
        printf("l'équation admet deux solutions réelles notées %.2f et %.2f \n", x1,x2);
    }else if(d==0){
        printf("delta = %d \n", d);
        x3=(-b)/2*a;
        printf("l'équation admet une solution réelle double notée %.2f\n", x3);
    }else if(d<0){
        printf("delta = %d \n", d);
        printf("l'équation n'admet pas de solution réelle \n");
    }
    return 0;

}
