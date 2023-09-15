#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int a = (rand()%7);
    char* jour[]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanch"};

    printf("%s",jour[a]);




}
