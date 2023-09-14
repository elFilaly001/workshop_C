#include <stdio.h>

int main (){

    int num,num1,num2,num3,x;
    printf("etrer votre nombre :");
    scanf("%d" , &num);


    num1=num/100;
    num2=num/10 - num1*10;
    num3=num%10;

    printf("%d%d%d",num3,num2,num1);

}
