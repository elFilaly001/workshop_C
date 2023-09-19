#include<stdio.h>


int main(){

    int numArray[10];
    for (int i=0; i<10 ; i++){

        printf ("entrer votre num : ");
        scanf("%d" , &numArray[i]);

    }
    int max=numArray[0],min=numArray[0] ;

    for (int i=0 ;i<10 ; i++){

        printf("%d \n", numArray[i]);
    }
//Max
    for (int i=0; i<10 ; i++){

        if (max < numArray[i]){
            max=numArray[i];
        }

    }
    printf("max = %d ",max);
//Min

    for (int i=0 ; i<10; i++){

        if (min > numArray[i]){
            min=numArray[i];
        }
    }
    printf("min : %d " , min);
}
