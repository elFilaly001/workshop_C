#include <stdio.h>

int main(){

    int a;
    printf("veiller inserer votre moyenne : ");
    scanf("%d", &a);

    if(a<10){
        printf("oops s9ati");
    }else if (a>=10 && a<12){
        printf(" passable");
    }else if (a>=12 && a<14){
        printf ("assez bien");
    }else if (a>=14 && a<16){
        printf("bien");
    }
    else if(a>=16){
        printf("tres bien");
    }
    return 0;

}
