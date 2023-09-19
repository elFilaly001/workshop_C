#include<stdio.h>
#include<string.h>


int position(char c[],char l){
    int p=0;
    while(c[p]!=l){
        p++;
    }
    return p;
}

int main (){

    char ph[]="Quel sinistre mot !";

    printf("%d", position(ph,'m'));
    printf("\n%d", position(ph,'s'));
    int swap;
    swap = position(ph,'m');
    position(ph,'s')=position(ph,'m');
    position(ph,'s')=swap;

    printf("%s", ph);

}
